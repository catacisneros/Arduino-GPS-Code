#include <SoftwareSerial.h>
#include <TinyGPS++.h>

SoftwareSerial ss(4, 3);  // RX, TX for GPS module
TinyGPSPlus gps;

void setup() {
  Serial.begin(9600);
  ss.begin(9600);
}

void loop() {
  while (ss.available() > 0) {
    gps.encode(ss.read());
    if (gps.location.isUpdated()) {
      float latitude = gps.location.lat();
      float longitude = gps.location.lng();
      Serial.print("Latitude= "); 
      Serial.print(latitude, 6);
      Serial.print(" Longitude= "); 
      Serial.println(longitude, 6);
    }
  }
}
