//speakers are hooked up to A0 when //tapped they produce a sharp electric //current they will serve as buttons
int led = 11;
byte tapCount = 0;
 int power;
void setup(){
Serial.begin(9600);
pinMode(led,OUTPUT);
}

void loop(){
int sensorValue = analogRead(A0);
//this is a tap
 if(sensorValue > 40) //detect a tap
  {
    delay(70);
    tapCount = tapCount + 1;  //increment tap count
    int power = tapCount * 20;
 //the power the led gets is determined // by amount of taps
    if(tapCount > 4){
  analogWrite(led, power); 
  delay(1000);
  Serial.println(power);
  //Shows analogWrite on monitor
    }
      if(tapCount < 12){ 
      tapCount = 0;
//This line won't trigger
      }
    
  }
}
