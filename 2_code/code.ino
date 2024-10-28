const int irSensorPin = 2; 
const int waterLevelPin = A0; 
const int pumpRelayPin = 8; 
const int refillRelayPin = 9; 

const int waterLevelLowThreshold = 400; 


void setup() {
  pinMode(irSensorPin, INPUT);

  pinMode(pumpRelayPin, OUTPUT);
  pinMode(refillRelayPin, OUTPUT);

  digitalWrite(pumpRelayPin, LOW); 
  digitalWrite(refillRelayPin, HIGH); 
  Serial.begin(9600); 
}
void loop() {

  int irSensorValue = digitalRead(irSensorPin);
  int waterLevelValue = analogRead(waterLevelPin);

  Serial.print("Water level: ");
  Serial.println(waterLevelValue);

  Serial.print(irSensorValue);

  if (irSensorValue == LOW ) {
      digitalWrite(pumpRelayPin,LOW); 
      Serial.println("Dispensing Water: Pump ON");
  }else {
    digitalWrite(pumpRelayPin, HIGH); 
      Serial.println("Pump OFF");
      }

  if (waterLevelValue >= waterLevelLowThreshold) {
      digitalWrite(refillRelayPin, HIGH); 
      Serial.println("Refilling off");
  }
  else if(waterLevelValue<330){
      digitalWrite(refillRelayPin, LOW); 
      Serial.println("Refilling Water: Refill Pump ON");
  } 
  // else{
  //     digitalWrite(refillRelayPin, HIGH); 
  //     Serial.println("Refilling off");
  // }
  
  delay(500); 
}