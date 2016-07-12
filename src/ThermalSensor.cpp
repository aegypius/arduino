#include <Arduino.h>
#include <ThermalSensor.hpp>

ThermalSensor::ThermalSensor(int a, float b) {
  analogPin = a;
  voltage = b;
}

void ThermalSensor::update() {
  float reading = analogRead(analogPin);

  // converting that reading to voltage
  volts = (reading * voltage) / 1024.0;

  // converting from 10 mv per degree wit 500 mV offset
  // to degrees ((voltage - 500mV) times 100)
  celsius = (volts - 0.5) * 100;

  // convert celsius to kelvin
  kelvin = celsius + 273.15;

  // convert celsius to fahrenheit
  fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
}

float ThermalSensor::getVolts() {
  return volts;
}

float ThermalSensor::getKelvin() {
  return kelvin;
}

float ThermalSensor::getCelsius() {
  return celsius;
}

float ThermalSensor::getFahrenheit() {
  return fahrenheit;
}
