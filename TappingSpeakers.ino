byte tapCount = 0;
 int power;
void setup()
{
Serial.begin(9600);
pinMode(led,OUTPUT);
}

void loop()
{
int sensorValue = analogRead(A0);


if(sensorValue > 40) //detect a tap
  {
    delay(70);
    tapCount = tapCount + 1; //increment tap count
    int power = tapCount * 20;
    if(tapCount > 4){
 
  analogWrite(led, power); 
  delay(1000);
 
  Serial.println(power);
    }
    if(tapCount > 12){ //for some reason this if statement wont trigger. plz help
      power = 0;
    }
    
  }
}
