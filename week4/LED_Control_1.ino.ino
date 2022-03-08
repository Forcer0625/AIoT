#include <BluetoothSerial.h>

//define
int LED=13;
BluetoothSerial BT;
char cmd;

//setup
void setup()
{
  Serial.begin(9600);
  BT.begin("Galahuagua_0512");
  pinMode(LED, OUTPUT);
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
    }
    Serial.print("=>");
  }
  if(BT.available()>0)
  {
    cmd = BT.read();
    switch (cmd) {
        case 'o':
        case 'O':
            // do something
          digitalWrite(LED, HIGH);
          BT.println("HIGH");
            break;
        case 'x':
        case 'X':
            // do something
          digitalWrite(LED, LOW);
          BT.println("LOW");
            break;
    }
    BT.println("=>");
  }
}
