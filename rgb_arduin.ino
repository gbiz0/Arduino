void setup() 
{
  // Ativando os pinos
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(6, OUTPUT); 
}void loop() {
  digitalWrite(10,HIGH);
  delay(500);
  digitalWrite(10,LOW);  
  digitalWrite(8,HIGH);
  delay(500);
  digitalWrite(8,LOW);  
  digitalWrite(6,HIGH);
  delay(500);
  digitalWrite(6,LOW);     
}
