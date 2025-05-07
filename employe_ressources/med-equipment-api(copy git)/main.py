from fastapi import FastAPI, UploadFile, File, HTTPException
from fastapi.responses import JSONResponse
import shutil
from pathlib import Path
import tempfile
import os
from llmClaude import identify_medical_equipment
from textToSpeech import text_to_speech_gtts

app = FastAPI()

@app.post("/identify-and-vocalize-equipment/")
async def identify_and_vocalize_equipment(file: UploadFile = File(...)):
    """
    API endpoint to identify medical equipment from an uploaded image and generate audio.
    Returns equipment name and absolute path to audio file.
    """
    temp_image = None  # Initialize temp_image to None for cleanup
    try:
        # Validate file extension
        allowed_extensions = {'.jpg', '.jpeg', '.png'}
        if Path(file.filename).suffix.lower() not in allowed_extensions:
            raise HTTPException(status_code=400, detail="Only JPG and PNG files are allowed.")

        # Create a temporary file with the same extension as the uploaded file
        with tempfile.NamedTemporaryFile(delete=False, suffix=Path(file.filename).suffix) as temp_file:
            temp_image = temp_file.name
            # Save the uploaded file to the temporary location
            shutil.copyfileobj(file.file, temp_file)
        
        print(f"Saving uploaded file to: {temp_image}")

        # Identify equipment
        equipment_name = identify_medical_equipment(
            image_path=temp_image,
            prompt="Name the medical equipment in this picture in one short phrase. No other text allowed."
        )
        
        # Define absolute output path for audio and ensure the directory exists
        audio_output_path = Path.cwd() / "audio" / "output.mp3"
        audio_output_path.parent.mkdir(parents=True, exist_ok=True)  # Create the 'audio' directory if it doesn't exist
        
        # Generate audio and get absolute path
        absolute_audio_path = text_to_speech_gtts(equipment_name, str(audio_output_path))
        
        # Return equipment name and absolute audio file path
        response = {
            "equipment_name": equipment_name,
            "audio_file_path": absolute_audio_path
        }
        
        return JSONResponse(content=response, status_code=200)
    
    except Exception as e:
        raise HTTPException(status_code=500, detail=f"Error: {str(e)}")
    
    finally:
        # Clean up the temporary file if it was created
        if temp_image and os.path.exists(temp_image):
            try:
                Path(temp_image).unlink()
            except Exception as e:
                print(f"Failed to delete temporary file {temp_image}: {e}")

# Run with: uvicorn main:app --reload
# Test ON GIT BASH: 
r'''
curl -X POST "http://127.0.0.1:8000/identify-and-vocalize-equipment/" \
-F "file=@C:\Users\a7mda\Desktop\produit.jpg"
'''