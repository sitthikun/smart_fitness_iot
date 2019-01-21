#include <SoftwareSerial.h>

SoftwareSerial ble(2, 3); // RX, TX

void setup() {
  // Open serial port
  Serial.begin(9600);
  // begin bluetooth serial port communication
  ble.begin(9600);
}

// Now for the loop
int i=0;
int x=0;
int y=0;

void loop() {
  i++;
  x=x+2;
  y=y+3;
  //String xMessage="Testing : " + String(i);
  Serial.println("1X" + String(i));
  Serial.println("2X" + String(x));
  Serial.println("3X" + String(y));
  //ble.write("Test : xx");
  delay(1000);
  
}
