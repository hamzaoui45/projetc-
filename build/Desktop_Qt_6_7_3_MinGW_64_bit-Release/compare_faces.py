import cv2
import sys
import numpy as np
from skimage.metrics import structural_similarity as ssim

if len(sys.argv) < 3:
    print("Erreur: Chemins des images non fournis")
    sys.exit(1)

captured_image_path = sys.argv[1]
reference_image_path = sys.argv[2]

print(f"Image capturée : {captured_image_path}")
print(f"Image de référence : {reference_image_path}")

captured_image = cv2.imread(captured_image_path, cv2.IMREAD_GRAYSCALE)
reference_image = cv2.imread(reference_image_path, cv2.IMREAD_GRAYSCALE)

if captured_image is None:
    print("Erreur: Impossible de charger l'image capturée")
    sys.exit(1)
if reference_image is None:
    print("Erreur: Impossible de charger l'image de référence")
    sys.exit(1)

face_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_frontalface_default.xml')

# Prétraitement : flou gaussien et égalisation d'histogramme
captured_image = cv2.GaussianBlur(captured_image, (5, 5), 0)
reference_image = cv2.GaussianBlur(reference_image, (5, 5), 0)
captured_image = cv2.equalizeHist(captured_image)
reference_image = cv2.equalizeHist(reference_image)

# Fonction pour détecter un visage avec rotation
def detect_face_with_rotation(image, cascade):
    angles = [0, 15, -15, 30, -30]
    for angle in angles:
        (h, w) = image.shape[:2]
        center = (w // 2, h // 2)
        M = cv2.getRotationMatrix2D(center, angle, 1.0)
        rotated = cv2.warpAffine(image, M, (w, h))
        faces = cascade.detectMultiScale(rotated, scaleFactor=1.05, minNeighbors=0, minSize=(5, 5))
        if len(faces) > 0:
            return faces[0], rotated, angle
    return None, image, 0

# Détection du visage dans l'image capturée
captured_face_info, captured_rotated, captured_angle = detect_face_with_rotation(captured_image, face_cascade)
if captured_face_info is None:
    print("Erreur: Aucun visage détecté dans l'image capturée, même après rotation")
    cv2.imwrite("captured_image_failed.jpg", captured_rotated)
    sys.exit(1)

(x, y, w, h) = captured_face_info
captured_face = captured_rotated[y:y+h, x:x+w]

# Détection du visage dans l'image de référence
reference_face_info, reference_rotated, reference_angle = detect_face_with_rotation(reference_image, face_cascade)
if reference_face_info is None:
    print("Erreur: Aucun visage détecté dans l'image de référence, même après rotation")
    cv2.imwrite("reference_image_failed.jpg", reference_rotated)
    sys.exit(1)

(x, y, w, h) = reference_face_info
reference_face = reference_rotated[y:y+h, x:x+w]

# Deuxième égalisation d'histogramme pour la comparaison SSIM
captured_face = cv2.equalizeHist(captured_face)
reference_face = cv2.equalizeHist(reference_face)

# Redimensionner les visages
captured_face = cv2.resize(captured_face, (200, 200))
reference_face = cv2.resize(reference_face, (200, 200))

cv2.imwrite("captured_face_extracted.jpg", captured_face)
cv2.imwrite("reference_face_extracted.jpg", reference_face)

# Calculer le score SSIM
similarity_score, _ = ssim(captured_face, reference_face, full=True)
print(f"Score de similarité SSIM: {similarity_score}")

# Vérifier si le score dépasse le seuil
if similarity_score > 0.1:
    print("Match")
else:
    print("Erreur: Les visages ne correspondent pas")
    sys.exit(1)