  int mode=0;
  bool led_stt=1;
  unsigned long t_pre=-1;
  int led=3;
void setup() {
  pinMode(11,INPUT);
  pinMode(3,OUTPUT);
  digitalWrite(3,HIGH);
}
void loop() {
 
  // put your main code here, to run repeatedly:
  int button=digitalRead(11);
  if(button==1){
    if(mode!=1){
  mode=1;
  t_pre=millis();
  led_stt=1;
    }
  }
  else{
  mode=0;
  }
  switch(mode){
    case 0:
    digitalWrite(3,1);
    break;
    default:
    if(millis()-t_pre>=500){
      digitalWrite(3,led_stt);
      led_stt=!led_stt;
      t_pre=millis();
    }
  }
}
