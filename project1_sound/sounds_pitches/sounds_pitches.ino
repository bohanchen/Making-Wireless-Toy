#include "pitches.h" // note library

//init the melodies
int melody[] = {NOTE_C4, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4};
int melody2[] = {NOTE_C6, NOTE_CS6, NOTE_D6, NOTE_DS6, NOTE_B5, NOTE_B0, NOTE_CS1};
int melody3[] = {NOTE_C5, NOTE_C5, NOTE_F5, NOTE_F5, NOTE_G5, NOTE_G5, NOTE_C5};
int melody4[] = {NOTE_C4, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4};
int melody5[] = {NOTE_C4, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4};

int button = 12;

int noteDurations[]={4,8,8,4,4,4,4,4};
int noteDurations2[]={5,8,8,3,2,1,6,8};
int noteDurations3[]={4,8,8,4,4,4,4,4};
int noteDurations4[]={4,8,8,4,4,4,4,4};
int noteDurations5[]={4,8,8,4,4,4,4,4};

void setup() {
  // make the button's pin input
  pinMode(button, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  int buttonState = digitalRead(button);
  Serial.println(buttonState);
  delay(400);

  if(buttonState == 1){
    
    for (int i = 0; i<8; i++){
      int noteDuration = 1000/noteDurations[i];
      tone(8, melody[i], noteDuration);

      int pauseBetweenNotes = noteDuration *1.30;
      Serial.println(pauseBetweenNotes);
      delay(pauseBetweenNotes);
    } 


    for (int i = 0; i<8; i++){
      int noteDuration2 = 1500/noteDurations2[i];
      tone(8, melody2[i], noteDuration2);

      int pauseBetweenNotes = noteDuration2 *1.30;
      delay(pauseBetweenNotes);
    } 

  }
}
