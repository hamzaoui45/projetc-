from transformers import pipeline
import sys
import io
from collections import Counter

sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf-8')

try:
    classifier = pipeline("text-classification", model="j-hartmann/emotion-english-distilroberta-base")
except Exception as e:
    print(f"Erreur lors de l'initialisation du modèle : {e}")
    sys.exit(1)

def analyze_emotion(text):
    try:
        result = classifier(text)
        emotion = result[0]['label']
        return emotion
    except Exception as e:
        print(f"Erreur lors de l'analyse de l'émotion : {e}")
        return "Erreur"

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Aucune réponse fournie.")
        sys.exit(1)

    responses = sys.argv[1:]
    emotions = []

    for i, rep in enumerate(responses):
        emotion = analyze_emotion(rep)
        emotions.append(emotion)
        print(f"Reponse {i+1}: {emotion}", flush=True)

    # Calcul de l’émotion globale
    emotion_counts = Counter(emotions)
    global_emotion = emotion_counts.most_common(1)[0][0]
    print(f"\n {global_emotion}", flush=True)
