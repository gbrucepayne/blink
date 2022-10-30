#include <Arduino.h>

#ifndef LED_ON
  #define LED_ON (HIGH)
#endif

#ifndef LED_BUILTIN
  #define LED_BUILTIN(13)
#endif

#ifndef LED
  #define LED (LED_BUILTIN)
#endif

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(115200);
  Serial.println("Blink started...");
}

void loop() {
  Serial.println("blink on");
  digitalWrite(LED, LED_ON);
  delay(1000);

  Serial.println("blink off");
  digitalWrite(LED, !LED_ON);
  delay(1000);
}