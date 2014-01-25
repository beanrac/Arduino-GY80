/*
  GY-80 IMU. Simple Example (Integer equations)
  ADXL345  version >= 1.0.2 : https://github.com/jarzebski/Arduino-ADXL345
  BMP085   version >= 1.0.2 : https://github.com/jarzebski/Arduino-BMP085-BMP180
  L3G4200D version >= 1.3.2 : https://github.com/jarzebski/Arduino-L3G4200D
  HMC5883L version >= 1.0.1 : https://github.com/jarzebski/Arduino-HMC5883L
  Read more: TODO
  GIT: https://github.com/jarzebski/Arduino-GY80
  Web: http://www.jarzebski.pl
  (c) 2014 by Korneliusz Jarzebski
*/

#include <Wire.h>

#include <ADXL345.h>
#include <L3G4200D.h>
#include <HMC5883L.h>
#include <BMP085.h>

ADXL345 accelerometer;
L3G4200D gyroscope;
HMC5883L magnetometer;
BMP085 barometer;

void setup()
{
}

void loop()
{
}
