int click_pin = 2;
int click_press = LOW;
int click_count = 0;

bool check = true;

void setup() {
  Serial.begin(9600);
}

void loop() {
  pinMode(click_pin, INPUT);
  click_press = digitalRead(click_pin);

  if (click_press == HIGH)
  {
    if (check)
    {
      check = false;
      Serial.print(++click_count);
      Serial.print("\n");
    }
  }
  else
  {
    check = true;
  }

  delay(50);
}
