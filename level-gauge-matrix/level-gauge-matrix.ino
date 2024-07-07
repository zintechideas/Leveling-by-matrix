//Follow us on other social media

//https://www.youtube.com/c/ZinTechIdeas
//https://www.facebook.com/zin.techideas.3
//https://www.instagram.com/zintechideas/
//https://twitter.com/Zintechideas
//https://zintechideas.ir/
#include <LedControl.h>
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_ADXL345_U.h>


Adafruit_ADXL345_Unified accel = Adafruit_ADXL345_Unified(12345);
LedControl lc = LedControl(12, 11, 10, 1);

void a() {
  lc.clearDisplay(0);
  lc.setLed(0, 0, 7, true);
  lc.setLed(0, 1, 7, true);
  lc.setLed(0, 2, 7, true);
  lc.setLed(0, 3, 7, true);
  lc.setLed(0, 4, 7, true);
  lc.setLed(0, 5, 7, true);
  lc.setLed(0, 6, 7, true);
  lc.setLed(0, 7, 7, true);
}


void b() {
  lc.clearDisplay(0);
  lc.setLed(0, 0, 4, true);
  lc.setLed(0, 1, 4, true);
  lc.setLed(0, 2, 5, true);
  lc.setLed(0, 3, 5, true);
  lc.setLed(0, 4, 6, true);
  lc.setLed(0, 5, 6, true);
  lc.setLed(0, 6, 7, true);
  lc.setLed(0, 7, 7, true);
}


void c() {
  lc.clearDisplay(0);
  lc.setLed(0, 0, 3, true);
  lc.setLed(0, 1, 3, true);
  lc.setLed(0, 2, 4, true);
  lc.setLed(0, 3, 4, true);
  lc.setLed(0, 4, 5, true);
  lc.setLed(0, 5, 6, true);
  lc.setLed(0, 6, 6, true);
  lc.setLed(0, 7, 7, true);
}


void d() {
  lc.clearDisplay(0);
  lc.setLed(0, 0, 0, true);
  lc.setLed(0, 1, 1, true);
  lc.setLed(0, 2, 2, true);
  lc.setLed(0, 3, 3, true);
  lc.setLed(0, 4, 4, true);
  lc.setLed(0, 5, 5, true);
  lc.setLed(0, 6, 6, true);
  lc.setLed(0, 7, 7, true);
}


void e() {
  lc.clearDisplay(0);
  lc.setLed(0, 3, 0, true);
  lc.setLed(0, 3, 1, true);
  lc.setLed(0, 4, 2, true);
  lc.setLed(0, 4, 3, true);
  lc.setLed(0, 5, 4, true);
  lc.setLed(0, 6, 5, true);
  lc.setLed(0, 6, 6, true);
  lc.setLed(0, 7, 7, true);
}


void f() {
  lc.clearDisplay(0);
  lc.setLed(0, 4, 0, true);
  lc.setLed(0, 4, 1, true);
  lc.setLed(0, 5, 2, true);
  lc.setLed(0, 5, 3, true);
  lc.setLed(0, 6, 4, true);
  lc.setLed(0, 6, 5, true);
  lc.setLed(0, 7, 6, true);
  lc.setLed(0, 7, 7, true);
}


void g() {
  lc.clearDisplay(0);
  lc.setLed(0, 7, 0, true);
  lc.setLed(0, 7, 1, true);
  lc.setLed(0, 7, 2, true);
  lc.setLed(0, 7, 3, true);
  lc.setLed(0, 7, 4, true);
  lc.setLed(0, 7, 5, true);
  lc.setLed(0, 7, 6, true);
  lc.setLed(0, 7, 7, true);
}

void setup() {

  lc.shutdown(0, false);
  lc.setIntensity(0, 8);
  lc.clearDisplay(0);


  accel.begin();
  accel.setRange(ADXL345_RANGE_16_G);
}

void loop() {
 
  sensors_event_t event;
  accel.getEvent(&event);
  float z = event.acceleration.z;
  int zdeg = z * 8.85; 
  

  if (zdeg >= 77)
    a();
  if (zdeg >= 64 && zdeg < 77)
    b();
  if (zdeg >= 51 && zdeg < 64)
    c();
  if (zdeg >= 38 && zdeg < 51)
    d();
  if (zdeg >= 25 && zdeg < 38)
    e();
  if (zdeg >= 13 && zdeg < 25)
    f();
  if (zdeg < 13)
    g();
  
  delay(100);
}
