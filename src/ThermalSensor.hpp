
// TMP36 Pin Variables
// the analog pin the TMP36's Vout (sense) pin is connected to
// the resolution is 10 mV / degree centigrade with a
// 500 mV offset to allow for negative temperatures
class ThermalSensor {
  int analogPin;
  float voltage, volts, celsius, fahrenheit, kelvin;
  public:
    ThermalSensor(int, float);
    void update();
    float getKelvin();
    float getVolts();
    float getCelsius();
    float getFahrenheit();
};
