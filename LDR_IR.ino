void setup() {
  // put your setup code here, to run once:
pinMode(A1,INPUT);
pinMode(12,INPUT);
pinMode(5,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int val = analogRead(A1);
int va_l = digitalRead(12);

Serial.println(val);
Serial.println(va_l);


if(val<250 && va_l==HIGH)
{
  digitalWrite(5,HIGH);
 
}
else{
  digitalWrite(5,LOW);
  
}
delay(500);

}