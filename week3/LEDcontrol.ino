//define
int LED=13;
char cmd;

//setup
void setup()
{
	Serial.begin(9600);
	Serial.println("Arduino Control is ready!");
	Serial.print("=>");
	
}

//loop
void loop()
{
	
	//Check LED on?
	if(Serial.available()>0)
	{
		cmd = Serial.read();
		switch (cmd) {
		    case 'o':
		    case 'O':
		      	// do something
		    	digitalWrite(LED, HIGH);
		    	Serial.println("HIGH");
		      	break;
		    case 'x':
		    case 'X':
		      	// do something
		    	digitalWrite(LED, LOW);
		    	Serial.println("LOW");
		      	break;
		    default:
		    	// do something
		    	Serial.println("Please input O and X only!");
		}
		Serial.print("=>");
	}
}