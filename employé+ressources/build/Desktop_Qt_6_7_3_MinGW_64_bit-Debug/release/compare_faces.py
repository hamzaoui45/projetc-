import cv2
import sys
import numpy as np
from skimage.metrics import structural_similarity as ssim

# Récupérer les chemins des images
if len(sys.argv) < 3:
    print("Erreur: Chemins des images non fournis")
    sys.exit(1)

captured_image_path = sys.argv[1]
reference_image_path = sys.argv[2]

# Afficher les chemins pour débogage
print(f"Image capturée : {captured_image_path}")
print(f"Image de référence : {reference_image_path}")

# Charger les images en niveaux de gris
captured_image = cv2.imread(captured_image_path, cv2.IMREAD_GRAYSCALE)
reference_image = cv2.imread(reference_image_path, cv2.IMREAD_GRAYSCALE)

if captured_image is None:
    print("Erreur: Impossible de charger l'image capturée")
    sys.exit(1)
if reference_image is None:
    print("Erreur: Impossible de charger l'image de référence")
    sys.exit(1)

# Charger les classificateurs Haar Cascade pour détecter les visages et les yeux
face_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_frontalface_default.xml')
eye_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_eye.xml')

# Détecter les visages dans l'image capturée
captured_faces = face_cascade.detectMultiScale(captured_image, scaleFactor=1.1, minNeighbors=1, minSize=(15, 15))
if len(captured_faces) == 0:
    print("Erreur: Aucun visage détecté dans l'image capturée")
    cv2.imwrite("captured_image_failed.jpg", captured_image)  # Sauvegarder pour débogage
    sys.exit(1)

# Prendre le premier visage détecté
(x, y, w, h) = captured_faces[0]
captured_face = captured_image[y:y+h, x:x+w]

# Détecter les yeux dans l'image capturée pour aligner le visage
captured_eyes = eye_cascade.detectMultiScale(captured_face, scaleFactor=1.1, minNeighbors=3)
if len(captured_eyes) < 2:
    print("Erreur: Impossible de détecter les yeux dans l'image capturée")
    # Continuer sans alignement si les yeux ne sont pas détectés
else:
    # Calculer l'angle de rotation basé sur les yeux
    eye1, eye2 = captured_eyes[:2]
    dx = eye2[0] - eye1[0]
    dy = eye2[1] - eye1[1]
    angle = np.arctan2(dy, dx) * 180.0 / np.pi
    # Aligner l'image capturée
    (h, w) = captured_face.shape[:2]
    center = (w // 2, h // 2)
    M = cv2.getRotationMatrix2D(center, angle, 1.0)
    captured_face = cv2.warpAffine(captured_face, M, (w, h))

# Détecter les visages dans l'image de référence
reference_faces = face_cascade.detectMultiScale(reference_image, scaleFactor=1.1, minNeighbors=1, minSize=(15, 15))
if len(reference_faces) == 0:
    print("Erreur: Aucun visage détecté dans l'image de référence")
    cv2.imwrite("reference_image_failed.jpg", reference_image)  # Sauvegarder pour débogage
    sys.exit(1)

# Prendre le premier visage détecté
(x, y, w, h) = reference_faces[0]
reference_face = reference_image[y:y+h, x:x+w]

# Détecter les yeux dans l'image de référence pour aligner le visage
reference_eyes = eye_cascade.detectMultiScale(reference_face, scaleFactor=1.1, minNeighbors=3)
if len(reference_eyes) < 2:
    print("Erreur: Impossible de détecter les yeux dans l'image de référence")
    # Continuer sans alignement si les yeux ne sont pas détectés
else:
    # Calculer l'angle de rotation basé sur les yeux
    eye1, eye2 = reference_eyes[:2]
    dx = eye2[0] - eye1[0]
    dy = eye2[1] - eye1[1]
    angle = np.arctan2(dy, dx) * 180.0 / np.pi
    # Aligner l'image de référence
    (h, w) = reference_face.shape[:2]
    center = (w // 2, h // 2)
    M = cv2.getRotationMatrix2D(center, angle, 1.0)
    reference_face = cv2.warpAffine(reference_face, M, (w, h))

# Égalisation d'histogramme pour normaliser l'éclairage
captured_face = cv2.equalizeHist(captured_face)
reference_face = cv2.equalizeHist(reference_face)

# Redimensionner les visages pour qu'ils aient la même taille (augmenté pour plus de détails)
captured_face = cv2.resize(captured_face, (200, 200))
reference_face = cv2.resize(reference_face, (200, 200))

# Sauvegarder les visages détectés pour inspection
cv2.imwrite("captured_face_extracted.jpg", captured_face)
cv2.imwrite("reference_face_extracted.jpg", reference_face)

# Calculer la similarité SSIM entre les deux visages
similarity_score, _ = ssim(captured_face, reference_face, full=True)

# Afficher le score de similarité pour débogage
print(f"Score de similarité SSIM: {similarity_score}")

# Seuil de similarité (réduit pour être encore moins strict)
if similarity_score > 0.1:  # Ajusté de 0.2 à 0.1
    print("Match")
else:
    print("Erreur: Les visages ne correspondent pas")
    sys.exit(1)