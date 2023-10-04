int mode=3;
bool led_stt=1;
bool isPressed=false;
unsigned long t_pre=-1;
int button=11;
int led=3;
void setup() {
  Serial.begin(9600);
pinMode(button,INPUT);
pinMode(3,OUTPUT);
digitalWrite(3,HIGH);
}

void loop() {
  int button=digitalRead(11);
  if(button==HIGH){
    isPressed=true;
  }
  else{ 
     if(isPressed){
      mode=(mode==3?mode=1:mode+1);
         Serial.println(mode);
      if(mode==2){
          t_pre=millis();
         led_stt=1;
      }
      isPressed=false;
    }
    switch(mode){
      case 1:
      digitalWrite(3,LOW);
      break;
      case 2:{
         if(millis()-t_pre>=500){
      digitalWrite(3,led_stt);
      led_stt=!led_stt;
      t_pre=millis();
    }
    break;
      }
      default:
      digitalWrite(3,HIGH);
}}
}
