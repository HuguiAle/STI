int  motor=16;
int  motor2=05;
int boton=15;

void setup() {
pinMode(A0,INPUT);
pinMode(motor,OUTPUT);
pinMode(motor2,OUTPUT);
Serial.begin(9600);

}

void loop() {

  Serial.println(analogRead(A0));
  int t2=map(analogRead(A0),1,500,30,500); 
  int t =map(analogRead(A0),550,1024,30,500);
  
  delay(t);
  digitalWrite(motor,HIGH);
  delay(t);
  digitalWrite(motor,LOW);
  
  delay(t2);
  digitalWrite(motor2,HIGH);
  delay(t2);   
  digitalWrite(motor2,LOW);
  

}
