const int LIGHT_SENSOR_PIN = A0;
const int LED_PIN          = 3;
const int ANALOG_THRESHOLD = 870;
int analogValue;
int newval;


void setup() {
  // put your setup code here, to run once:
  //pinMode(LED_PIN, OUTPUT); // set arduino pin to output mode
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
analogValue = analogRead(LIGHT_SENSOR_PIN);
Serial.print(analogValue);
Serial.print(",  ");
newval = map(analogValue, 250, 870, 255, 0);
Serial.print(newval);
Serial.println();
analogWrite(LED_PIN, newval);
delay(100);
if(analogValue > ANALOG_THRESHOLD){
  digitalWrite(LED_PIN, LOW); }
//else
  //digitalWrite(LED_PIN, LOW);
}
