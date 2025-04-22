# script_medical.py
from transformers import AutoTokenizer, AutoModelForSequenceClassification
import torch
import sys

# Charger le modèle pré-entraîné MedBERT ou ClinicalBERT
model_name = "emilyalsentzer/Bio_ClinicalBERT"
tokenizer = AutoTokenizer.from_pretrained(model_name)
model = AutoModelForSequenceClassification.from_pretrained(model_name)

def predict_diagnosis(symptoms_text):
    inputs = tokenizer(symptoms_text, return_tensors="pt", truncation=True, padding=True)
    with torch.no_grad():
        logits = model(**inputs).logits
    predicted_class = torch.argmax(logits, dim=1)
    return predicted_class.item()

# Récupérer les réponses du patient depuis les arguments du script
if __name__ == "__main__":
    symptoms = ' '.join(sys.argv[1:])  # Prendre les symptômes comme arguments
    diagnosis = predict_diagnosis(symptoms)
    print(f"Diagnostic prédit : {diagnosis}")
