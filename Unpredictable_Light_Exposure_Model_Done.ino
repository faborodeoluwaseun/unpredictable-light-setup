
int WhiteLED = 3;
int brightness = 35;    // how bright the LED is

void setup( )
{
  pinMode( WhiteLED, OUTPUT) ; //set LEDPin to be an OUTPUT
  Serial.begin(9600);      // turn on Serial Port
}

void loop( ){

analogWrite(WhiteLED, brightness); // put on the LED with a brightness of the value indicated above
delay(random(120000,3600000)); // wait for this period of time

digitalWrite (WhiteLED, LOW); // turn LED off
delay(random(120000,3600000)); //wait for this period of time

}


