
// gps_repeater
// Operation Helios (operationhelios.com)

// simply relays data straight from a GPS receiver to a computer (using serial)

#include <SoftwareSerial.h>

const unsigned int GPS_RX = 3;
const unsigned int GPS_TX = A5;  // unused
const unsigned int GPS_BAUD = 4800;
const unsigned int SERIAL_BAUD = 57600;

SoftwareSerial gpsSerial = SoftwareSerial(GPS_RX, GPS_TX);

void setup()
{
  Serial.begin(SERIAL_BAUD);
  gpsSerial.begin(GPS_BAUD);
}

void loop()
{
  if (gpsSerial.available())
    Serial.write(gpsSerial.read());
}

