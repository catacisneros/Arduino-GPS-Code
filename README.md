# Arduino-GPS-Code
This basic GPS tracking system allows you to read GPS data from an Arduino and display it on a web interface using Python and Flask. The system can be extended with more advanced features like real-time updates or mapping functionality as needed.

# Components needed
- Arduino UNO
- GPS Module (e.g., NEO-6M GPS)
- Internet connection (Wi-Fi or Ethernet Shield for Arduino)
- Web server (Local or using platforms like Flask/Django in Python)
- Python (for data handling and server)

# Libraries
### Arduino
- TinyGPS++
- SoftwareSerial
### Python
- pyserial
- Flask (Jinja2)

# Setup
### Arduino Setup:
- Connect the GPS module to the Arduino UNO as described in the project.
- Upload the Arduino code to the Arduino board to start reading GPS data.
### Python Setup:
- Install the required Python libraries using pip:
-      pip install
-      pyserial flask
- Run the Flask server to view GPS data on the web interface.
### Web Interface:
The GPS data will be displayed in real-time on the webpage served by Flask.

# Running the Project
1. Upload the Arduino code to the UNO.
2. Run the Python Flask server using:
 -     python app.py
3. Visit http://127.0.0.1:5000/ in your web browser to see the GPS coordinates.
