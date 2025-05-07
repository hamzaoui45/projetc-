import os
from gtts import gTTS
from pathlib import Path

def text_to_speech_gtts(text: str, output_path: str = "audio/output.mp3") -> str:
    try:
        # Convert to absolute path
        absolute_output_path = str(Path(output_path).resolve())
        
        # Create output directory if it doesn't exist
        output_dir = Path(absolute_output_path).parent
        output_dir.mkdir(exist_ok=True)
        
        # Generate audio
        tts = gTTS(text=text, lang='en', slow=False)
        tts.save(absolute_output_path)
        
        # Return absolute path
        return absolute_output_path
    except Exception as e:
        raise Exception(f"gTTS error: {str(e)}")