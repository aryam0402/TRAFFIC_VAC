#define interruptPin 2
#define red 5
#define blue 6
#define green 7

volatile bool vehicleDetected = false;

void vehicleISR()
{
  vehicleDetected = true;
}

void setup()
{
  pinMode(interruptPin,INPUT);
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);

  attachInterrupt(digitalPinToInterrupt(interruptPin),vehicleISR,LOW);
}

void loop()
{
  if(vehicleDetected)
  {
    digitalWrite(red,LOW);
    digitalWrite(blue,LOW);
    digitalWrite(green,HIGH);
    delay(10000);
    vehicleDetected = false;
  }
  else
  {  
  digitalWrite(red,HIGH);
  digitalWrite(blue,LOW);
  digitalWrite(green,LOW);
  delay(2000);

  digitalWrite(red,LOW);
  digitalWrite(blue,HIGH);
  digitalWrite(green,LOW);
  delay(1000);

  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(green,HIGH);
  delay(2000);
  }
}