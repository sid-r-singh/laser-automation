int led_blu = 9; 
int led_grn = 10;
int led_red = 11;
int bgt_red,bgt_grn,bgt_blu;
int val;
void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
pinMode(led_blu, OUTPUT);
pinMode(led_grn, OUTPUT);
pinMode(led_red, OUTPUT);
}

void loop() {
datatrans();
delay(10);
}
void datatrans(){
  if(Serial.available()){
    bgt_red=Serial.parseInt();
    bgt_grn=Serial.parseInt();
    bgt_blu=Serial.parseInt();
    if(Serial.read()==char(13)){
      analogWrite(led_red, bgt_red);
      analogWrite(led_grn, bgt_grn);
      analogWrite(led_blu, bgt_blu);
      }
    }
  }
