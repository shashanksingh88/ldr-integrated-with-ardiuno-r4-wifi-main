#include <Arduino.h>
#define LDR_PIN A0
void setup() {
    Serial.begin(9600);
    pinMode(LDR_PIN, INPUT);
}

void loop() {
    int ldr = analogRead(LDR_PIN);
    int lightPercent = map(ldr, 0, 1023, 0, 100);
    Serial.print("LDR Value: ");
    Serial.println(ldr);
    Serial.print("Light Intensity: ");
    Serial.print(lightPercent);
    delay(500);
}