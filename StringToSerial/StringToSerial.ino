String stringFromSerial; //declaring a variable called "stringFromSerial"


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600); //begins serial object, and set's speed. 
  Serial.println("Type a string in and hit 'send'");
  
}

void loop() {
  // put your main code here, to run repeatedly:
//    Serial.println("Hello, I'm a string, meaning a set of 'characters'! ");
//    delay(1500); //slow things down, in millis. 1000 millis = 1 second
//                //delay(20) = means "0 second in human time"
//                //delay(500) = 1/2 second
//                //delay(1000) = 1 second
//                //delay(1500) = 1.5 seconds
  if(Serial.available() > 0){
    stringFromSerial = Serial.readStringUntil('\n');
    Serial.print("I received: ");
    Serial.println(stringFromSerial); 
    
  }
}
