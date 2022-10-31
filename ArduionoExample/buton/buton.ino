int led=7; 
int buton=8; 
 
void setup() {
pinMode(led, OUTPUT); 
pinMode(buton, INPUT); 
}
 
void loop() {
  if(digitalRead(buton)==1){ 
  digitalWrite(led, LOW); 
  }else{
  digitalWrite(led, HIGH); 
  }
 
}
