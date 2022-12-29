int pinosLinhas[] = {8, 9, 10, 11};
int pinosColunas[] = {3, 4, 5, 6};
char teclas[4][4] = {{'1', '2', '3', 'A'},
                     {'4', '5', '6', 'B'},
                     {'7', '8', '9', 'C'},
                     {'*', '0', '#', 'D'}};

void setup() {
  for (int nL = 0; nL <= 3; nL++) {
    pinMode(pinosLinhas[nL], OUTPUT);
    digitalWrite(pinosLinhas[nL], HIGH);
  }
  for (int nC = 0; nC <= 3; nC++) {
    pinMode(pinosColunas[nC], INPUT_PULLUP);
  }
  Serial.begin(9600);
  Serial.println("Aguardando acionamento das teclas");
  Serial.println();
}

void loop() {
  for (int nL = 0; nL <= 3; nL++) {
    digitalWrite(pinosLinhas[nL], LOW);
    for (int nC = 0; nC <3; nC++) {
      if (digitalRead(pinosColunas[nC]) == LOW) {
        Serial.print("Tecla: ");
        Serial.println(teclas[nL][nC]);
        while (digitalRead(pinosColunas[nC]) == LOW) {}
      }
    }
    digitalWrite(pinosLinhas[nL], HIGH);
  }
  delay(10);
}
