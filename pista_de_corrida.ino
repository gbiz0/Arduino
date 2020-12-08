void setup() {
// Ativando os pinos 
pinMode(10, OUTPUT); 
pinMode(8, OUTPUT); 
pinMode(6, OUTPUT); 
pinMode(4, OUTPUT); 
} 
void loop() { 
 digitalWrite(10,HIGH);
 digitalWrite(4,HIGH); 
 // pisca do LED 
 delay(200); 
 digitalWrite(4,LOW); 
 delay(750);
 digitalWrite(8,HIGH); 
 digitalWrite(4,HIGH); 
 // pisca do LED 
 delay(200); 
 digitalWrite(4,LOW); 
 delay(750); 
 digitalWrite(6,HIGH); 
 digitalWrite(4,HIGH); 
 //pisca do LED 
 delay(200); 
 digitalWrite(4,LOW); 
 delay(2000); 
 // reset 
 digitalWrite(10,LOW); 
 digitalWrite(8,LOW); 
 digitalWrite(6,LOW); 
 // pausa para iniciar 
 delay(1000); 
 }
