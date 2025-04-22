from transformers import pipeline
import sys
import io
from collections import Counter

sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf-8')

try:
    classifier = pipeline("text-classification", model="emilyalsentzer/Bio_ClinicalBERT")
except Exception as e:
    print(f"Erreur lors de l'initialisation du modèle : {e}", flush=True)
    sys.exit(1)

# Mapping des labels à des diagnostics lisibles
label_map = {
    "LABEL_0": "Infection possible",
    "LABEL_1": "Douleur chronique",
    "LABEL_2": "Fièvre ou grippe",
    "LABEL_3": "Allergie ou réaction",
    # Ajoute plus si nécessaire, selon ton modèle
}

def analyze_diagnosis(text):
    try:
        result = classifier(text)
        label = result[0]['label']
        return label_map.get(label, label)  # Affiche un label lisible ou brut si inconnu
    except Exception as e:
        print(f"Erreur d'analyse : {e}", flush=True)
        return "Erreur"

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Aucune réponse fournie.", flush=True)
        sys.exit(1)

    responses = sys.argv[1:]
    diagnostics = []

    for i, rep in enumerate(responses):
        diag = analyze_diagnosis(rep)
        diagnostics.append(diag)
        print(f"Réponse {i+1}: {diag}", flush=True)

    # Calcul diagnostic principal
    counts = Counter(diagnostics)
    final_diag = counts.most_common(1)[0][0]
    print(f"\n{final_diag}", flush=True)
