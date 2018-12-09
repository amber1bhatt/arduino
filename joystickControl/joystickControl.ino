//SW to 2 on digital.
//VRY(y-axis) to A1 on analog. 
//VRX(x-axis) to A0 on analog. 
//+5V to 5V on power. 
//GND to GND on power
//Use baud rate of 115200 on serial monitor

const int SW_pin = 2;
const int Y_pin = 1;
const int X_pin = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(SW_pin, INPUT);
  digitalWrite(SW_pin, HIGH);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Switch: ");
  Serial.print(digitalRead(SW_pin));
  Serial.print("\n");
  Serial.print("X-axis: ");
  Serial.print(analogRead(X_pin));
  Serial.print("\n");
  Serial.print("Y-axis: ");
  Serial.print("\n\n");
  delay(250);
}
