#include <Arduino.h>
#include <ThermalSensor.hpp>

#define THERMAL_SENSOR_PIN 0
#define THERMAL_SENSOR_VOLTAGE 5.0
ThermalSensor tmp36(THERMAL_SENSOR_PIN, THERMAL_SENSOR_VOLTAGE);

/*
 * setup() - this function runs once when you turn your Arduino on
 * We initialize the serial connection with the computer
 */
void setup()
{
  Serial.begin(9600);
  while (!Serial) ;
  Serial.println("ARDUINO: ready");
}

// run over and over again
void loop()
{
  tmp36.update();

  Serial.println("");

  Serial.print("TMP36: ");
  Serial.print(tmp36.getVolts());
  Serial.println("V");

  Serial.print("TMP36: ");
  Serial.print(tmp36.getCelsius());
  Serial.println("°C");

  Serial.print("TMP36: ");
  Serial.print(tmp36.getKelvin());
  Serial.println("°K");

  Serial.print("TMP36: ");
  Serial.print(tmp36.getFahrenheit());
  Serial.println("°F");

  // waiting a second
  delay(1000);
}
