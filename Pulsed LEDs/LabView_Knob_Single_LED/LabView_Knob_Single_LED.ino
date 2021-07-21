int ledPin = 9;  
long interval;
int received_val;
int ledState = LOW;
// "unsigned long" for variables that hold time
unsigned long previousMillis = 0;   //store last time LED was updated

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
}

void loop() {
  //runs repeatedly:
  unsigned long currentMillis = millis();
  datatrans();
  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
  }
// delay(10);
}
void datatrans(){
  if(Serial.available()){
    received_val=Serial.parseInt();
    interval=received_val*1;
    if(Serial.read()==char(13)){
      
      }
    }
  }
