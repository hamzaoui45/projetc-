import speech_recognition as sr
import sys

try:
    r = sr.Recognizer() #yasnaa objet bch yaaref parole 
    with sr.Microphone() as source:#yhel micro 
        print("Parlez maintenant...")
        r.adjust_for_ambient_noise(source, duration=1)  # Réduire le bruit
        audio = r.listen(source, timeout=5, phrase_time_limit=5)  # 5 secondes max
        try:
            text = r.recognize_google(audio)#Convertit l'audio en texte avec  bl API Google
            print(text)
        except sr.UnknownValueError:
            print("Erreur: Parole non reconnue")
        except sr.RequestError as e:
            print(f"Erreur: Problème avec le service; {e}")
        except Exception as e:
            print(f"Erreur inattendue: {e}")
except Exception as e:
    print(f"Erreur microphone: {e}")
    sys.exit(1)