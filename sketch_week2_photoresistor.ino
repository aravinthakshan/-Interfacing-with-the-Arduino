

int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor
int lightup_Value = 20;
void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  delay(25);  
  
   if (sensorValue < lightup_Value) {
    digitalWrite(ledPin, HIGH);
  }
    else  {
    digitalWrite(ledPin, LOW);
  }
}
