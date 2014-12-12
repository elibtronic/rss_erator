

int loop_cnt = 0;



void setup(){
  
pinMode(0, INPUT_PULLUP); 
pinMode(1, INPUT_PULLUP);
pinMode(2, INPUT_PULLUP);
pinMode(3, INPUT_PULLUP);
pinMode(13,OUTPUT);
Keyboard.begin();
Serial.begin(9600);

}


void loop(){
  
  
  if (loop_cnt > 150){
  loop_cnt = 0;
  
  if(digitalRead(0) == LOW){
    Keyboard.print("j");
  }
  else if (digitalRead(1) == LOW){
    Keyboard.print("k"); 
  }
  else if (digitalRead(2) == LOW){
    Keyboard.print("v");
    digitalWrite(13,HIGH);
  }
  else if (digitalRead(3) == LOW){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('w');
    delay(100);
    Keyboard.releaseAll();
    digitalWrite(13,LOW); 
  } 

  
}
  loop_cnt++;
  delay(1); 


}
