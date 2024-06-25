void setup() {
  // put your setup code here, to run once:
 pinMode(A1,INPUT);
 pinMode(5,OUTPUT);
 pinMode(4,OUTPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int val = analogRead(A1);
Serial.println(val);
delay(500);

if(val>250)
{ digitalWrite(5,HIGH);
 digitalWrite(4,LOW);
}
else
{ digitalWrite(5,LOW);
 digitalWrite(4,HIGH);
}
}
