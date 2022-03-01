//define
int LED=13;
int Init = 2000;
int interval = Init;
int delta = 200;

//do-Blink
void DoBlink()
{
	digitalWrite(LED, HIGH);
	delay(interval);
	digitalWrite(LED, LOW);
	delay(interval);
}
void ChangeInterval()
{
	if(interval > delta)
		interval-=delta;
	else
		interval=Init;

	Serial.print("delay=");
	Serial.println(interval);
}

//setup
void setup()
{
	pinMode(LED, OUTPUT);
	Serial.begin(9600);
}

//loop
void loop()
{
	ChangeInterval();

	DoBlink();
}