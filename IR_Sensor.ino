void setup() {
  // put your setup code here, to run once:
 pinMode(8,INPUT);
 pinMode(3,OUTPUT);
 pinMode(5,OUTPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 int val = digitalRead(8);
 Serial.println(val);
 delay(500);

if(val==0){
 digitalWrite(3,HIGH);
 digitalWrite(5,LOW);
 }
else {
 digitalWrite(3,LOW);
 digitalWrite(5,HIGH);
}
}
