String msg = "Which color LED would you like to light?";
int red = 3;
int blue = 4; 
int green = 5;
String color; 
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(red,OUTPUT);
pinMode(blue,OUTPUT);
pinMode(green,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available()==0){
  
  }
  color = Serial.readString();
  if(color=="red"){
  digitalWrite(red,HIGH);
  digitalWrite(blue, LOW);
  digitalWrite(green, LOW);
  }
  
  if(color=="blue"){
  digitalWrite(red,LOW);
  digitalWrite(blue, HIGH);
  digitalWrite(green, LOW);
  }
  
  if(color=="green"){
  digitalWrite(red,LOW);
  digitalWrite(blue, LOW);
  digitalWrite(green, HIGH);
  }
}
