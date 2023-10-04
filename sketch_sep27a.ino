int nut=11;
int led=3;
int trangthai=0;
void setup() {
  // put your setup code here, to run once:
digitalWrite(led,LOW);
pinMode(nut,INPUT);
pinMode(led,OUTPUT);
}

void loop() {
if(trangthai==0){
  digitalWrite(led,LOW);
}

do{
if(digitalRead(nut)==HIGH){
  trangthai=1;
  digitalWrite(led,HIGH);
  delay(100);
  digitalWrite(led,LOW);
  delay(100);
}
}while(trangthai=1);
if(digitalRead(nut)==LOW){
digitalWrite(led,LOW);
}
}
