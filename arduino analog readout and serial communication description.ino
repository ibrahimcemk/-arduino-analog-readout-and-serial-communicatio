# arduino-analog-okuma-ve-seri-haberlesme

#define potpin A0

int deger=0;

void setup() {
 
 Serial.begin(9600);
 Serial.println("Pot Value Readout");

}

void loop() {
 
 deger = analogRead(potpin);
  
 float gerilim = (5.00/1024.00)*value;
 Serial.println(tension);
 Serial.println(value);
 delay(260);
}
