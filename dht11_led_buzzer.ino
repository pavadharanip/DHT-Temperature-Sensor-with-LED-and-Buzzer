#include <DHT.h>

DHT dht(2, DHT11);
int led = 3;
int buzz = 4;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(buzz,OUTPUT);
  dht.begin();
}

void loop() {
  float val = dht.readTemperature();
  Serial.println(val);
  if(val >33){
    digitalWrite(led,HIGH);
    digitalWrite(buzz,HIGH);
  }else{
     digitalWrite(led,LOW);
    digitalWrite(buzz,LOW);
  }
 

  delay(1000);
}
