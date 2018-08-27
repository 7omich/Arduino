const int SENSOR = 0;
const int LED = 9;

int val = 0;
int brightness = 0;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(SENSOR);

  Serial.println(val);

  if (val < 600) {
    brightness = 0;
  } else if (val > 855) {
    brightness = 255;
  } else {
    brightness = val - 600;
  }
  
  analogWrite(LED, brightness);
  delay(50);
}
