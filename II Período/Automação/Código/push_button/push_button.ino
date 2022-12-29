#define led 8
#define button 10

int b_state = 0;
bool state = LOW;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  
  b_state = digitalRead(button);
  
  if (b_state == LOW){
    state = !state;
    digitalWrite(led, state);
  } 
  while(digitalRead(button) == LOW);
    delay(100);
}
