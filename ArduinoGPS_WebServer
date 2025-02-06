## Flask Web Server Code

from flask import Flask, render_template
import serial
import threading

app = Flask(__name__)

# Set up serial connection to Arduino
arduino = serial.Serial('COM3', 9600)  # Replace COM3 with the correct port

gps_data = {"latitude": None, "longitude": None}

# Read GPS data in a separate thread
def read_gps():
    while True:
        if arduino.in_waiting > 0:
            line = arduino.readline().decode('utf-8').strip()
            if "Latitude=" in line:
                data = line.split(" ")
                gps_data["latitude"] = data[1]
                gps_data["longitude"] = data[3]

# Start the GPS reading thread
thread = threading.Thread(target=read_gps)
thread.daemon = True
thread.start()

@app.route('/')
def index():
    return render_template('index.html', gps_data=gps_data)

if __name__ == '__main__':
    app.run(debug=True)
