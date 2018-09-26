int ToneFreq = 700;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Enter a number between 0-5000");
  tone(8, ToneFreq, 1000);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    ToneFreq = Serial.parseInt();


    //Seq 1
    Serial.println("Seq 1");
    tone(8, ToneFreq, 700);
    delay(500);
    tone(8, ToneFreq/2, 700/2);
    delay(400);
    tone(8, ToneFreq/3, 700/3);
    delay(100);
  }
  

}
