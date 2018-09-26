int button = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  Serial.begin(9600);

  //Staring sound
  int i = 0;
  Serial.println("Begin Sound: Phone Ring");
  while(i<4){
    tone(8,900, 1500);
    delay(50);
    tone(8,1400, 600);
    delay(50);
    tone(8,1800, 250);
    delay(50);
    i+=1;
  }
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(button);
  Serial.println(buttonState);
  delay(400);
  if(buttonState == 1){
     //Happy Sound
     Serial.println("Happy Sound");
     tone(8, 2500,700);
     delay(100);
     tone(8, 2600,800);
     delay(100);
     tone(8, 2800,1000);
     delay(100);
     tone(8, 3000,800);
     delay(100);
     tone(8, 3200,1300);
     delay(100);

     //Set Interval
     delay(2000);
     
     //Sad Sound 
     Serial.println("Sad Sound");
     tone(8, 900,1300);
     delay(100);
     tone(8, 700,1200);
     delay(100);
     tone(8, 500,700);
     delay(100);
     tone(8, 300,900);
     delay(100);
     tone(8, 250,1400);
     delay(100);

     //Set Interval
     delay(2000);

     //Go to sleep sound
     Serial.println("Sleep Sound");
     tone(8, 200, 300);
     delay(100);
     tone(8, 230, 400);
     delay(100);
     tone(8, 200, 500);
     delay(100);
     tone(8, 250, 700);
     delay(100);
     tone(8, 300, 700);
     delay(100);
     tone(8, 100, 900);

     delay(2000);

     //wake up sound
     Serial.println("Wake up Sound");
      tone(8,4000, 600);
      delay(100);
      tone(8,3000, 1000);
      delay(100);
      tone(8,4000, 600);
      delay(100);
      tone(8,3250, 1000);
      delay(100);
      tone(8,4200, 1000);
      delay(100);

      delay(2000);

      //Happy Sleep Sound 1 1 5 5 6 6 5 -4 4 3 3 2 2 1
      Serial.print("Happy Sleep Sound");
      tone(8,1047, 500);
      delay(600);
      tone(8,1047, 500);
      delay(600);
      tone(8,1397, 500);
      delay(600);
      tone(8,1397, 500);
      delay(600);
      tone(8,1568, 500);
      delay(600);
      tone(8,1568, 500);
      delay(600);
      tone(8,1397, 500);
      delay(1300);
      tone(8,1319, 500);
      delay(600);
      tone(8,1319, 500);
      delay(600);
      tone(8,1245, 500);
      delay(600);
      tone(8,1245, 500);
      delay(600);
      tone(8,1175, 500);
      delay(600);
      tone(8,1175, 500);
      delay(600);
      tone(8,1047, 500);

      delay(2000);
      
      
    
  }

}
