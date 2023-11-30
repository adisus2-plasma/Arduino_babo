const int LED = 13;
const int Sensor = A0;

int level;
const int theshold = 640;

void setup()
{
pinMode (LED, OUTPUT);
Serial.begin(9600);
}

void loop() {
level = analogRead(Sensor);
if (level > theshold)
{
digitalWrite (LED, HIGH);
delay (1000);
digitalWrite (LED, LOW);
}
else
{
digitalWrite(LED, LOW);
}
}