#include "Arduino.h"
#define LED_BUILTIN 13
// オンボードのLEDを点滅させる
void setup()
{
	pinMode(LED_BUILTIN, OUTPUT);
}
void loop()
{
	digitalWrite(LED_BUILTIN, HIGH);
	delay(100);
	digitalWrite(LED_BUILTIN, LOW);
	delay(100);
}
