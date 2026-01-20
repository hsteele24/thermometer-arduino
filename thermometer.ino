// project 8
#define HOT        6 
#define COLD       2
#define NORMAL     4
#define d          1000
float voltage  =   0;
float celsius  =   0;
float hotTemp  =   26;
float coldTemp =   20;
float sensor   =   0;

void setup() 
{
pinMode(HOT, OUTPUT);
pinMode(NORMAL, OUTPUT);
pinMode(COLD, OUTPUT);
}

void loop()
{
sensor = analogRead(0);
voltage =(sensor*5000)/1024;
voltage = voltage - 0;
celsius = voltage/10;

if( celsius < coldTemp )
  {
    digitalWrite(COLD, HIGH);
    delay(d);
    digitalWrite(COLD, LOW);
  }
else if ( celsius > coldTemp && celsius <= hotTemp )
  {
    digitalWrite(NORMAL, HIGH);
    delay(d);
    digitalWrite(NORMAL, HIGH);
  }
else
  {
    digitalWrite(HOT, HIGH);
    delay(d);
    digitalWrite(HOT, HIGH);
  }

}
