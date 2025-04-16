import cv2
import sys
import os
import time
import numpy as np

# Initialiser la webcam
video_capture = cv2.VideoCapture(0) #thel camera
if not video_capture.isOpened():
    print("Erreur: Impossible d'ouvrir la webcam")
    sys.exit(1)

# Laisser la caméra s'initialiser (attendre 1 seconde)
time.sleep(1)

# Charger les classificateurs Haar Cascade pour détecter les visages et les yeux
face_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_frontalface_default.xml')
eye_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_eye.xml')

# Afficher un aperçu pendant 5 secondes pour te permettre de te positionner
print("Positionne-toi devant la caméra... Capture dans 5 secondes.")
start_time = time.time()
while (time.time() - start_time) < 5:  # Attendre 5 secondes
    ret, frame = video_capture.read()
    if not ret:
        print("Erreur: Impossible de capturer l'image pendant l'aperçu")
        video_capture.release()
        sys.exit(1)

    # Afficher l'aperçu
    cv2.imshow("Aperçu - Appuie sur une touche pour quitter", frame)
    if cv2.waitKey(1) & 0xFF == ord('q'):  # Appuie sur 'q' pour quitter l'aperçu plus tôt
        break

cv2.destroyAllWindows()

# Capturer plusieurs frames pour s'assurer d'une bonne qualité
for i in range(30):  # Augmenté à 30 frames pour meilleure qualité
    ret, frame = video_capture.read()
    if not ret:
        print("Erreur: Impossible de capturer l'image")
        video_capture.release()
        sys.exit(1)

# Sauvegarder l'image capturée brute pour vérification
captured_image_path = "captured_face_raw.jpg"
cv2.imwrite(captured_image_path, frame)
if not os.path.exists(captured_image_path):
    print("Erreur: Impossible de sauvegarder l'image capturée brute")
    sys.exit(1)

# Convertir l'image en niveaux de gris pour la détection
gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

# Détecter les visages avec des paramètres moins stricts
faces = face_cascade.detectMultiScale(gray, scaleFactor=1.1, minNeighbors=1, minSize=(15, 15))
if len(faces) == 0:
    print("Erreur: Aucun visage détecté lors de la capture")
    # Sauvegarder l'image en niveaux de gris pour débogage
    cv2.imwrite("captured_face_gray.jpg", gray)
    video_capture.release()
    sys.exit(1)

# Indiquer qu'un visage a été détecté
print("FaceDetected")

# Prendre le premier visage détecté
(x, y, w, h) = faces[0]
face_region = gray[y:y+h, x:x+w]

# Détecter les yeux dans la région du visage
eyes = eye_cascade.detectMultiScale(face_region, scaleFactor=1.1, minNeighbors=3)
if len(eyes) < 2:
    print("Erreur: Impossible de détecter les yeux lors de la capture")
    # Continuer sans alignement si les yeux ne sont pas détectés
else:
    # Calculer l'angle de rotation basé sur les yeux
    eye1, eye2 = eyes[:2]
    dx = eye2[0] - eye1[0]
    dy = eye2[1] - eye1[1]
    angle = np.arctan2(dy, dx) * 180.0 / np.pi
    # Aligner l'image entière
    (h, w) = frame.shape[:2]
    center = (w // 2, h // 2)
    M = cv2.getRotationMatrix2D(center, angle, 1.0)
    frame = cv2.warpAffine(frame, M, (w, h))

# Appliquer un léger flou pour réduire le bruit
frame = cv2.GaussianBlur(frame, (5, 5), 0)

# Sauvegarder l'image capturée finale après alignement
captured_image_path = "captured_face.jpg"
cv2.imwrite(captured_image_path, frame)

# Libérer la webcam
video_capture.release()

# Vérifier si l'image a été sauvegardée
if not os.path.exists(captured_image_path):
    print("Erreur: Impossible de sauvegarder l'image capturée")
    sys.exit(1)

# Retourner le chemin de l'image capturée
print(captured_image_path)