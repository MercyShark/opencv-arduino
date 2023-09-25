#include <cvzone.h>
SerialData serialData(1, 1);
int valsRec[1];
int ledPin = 9;
void setup()
{
    serialData.begin();
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    serialData.Get(valsRec);
    digitalWrite(ledPin, valsRec[0]);
}