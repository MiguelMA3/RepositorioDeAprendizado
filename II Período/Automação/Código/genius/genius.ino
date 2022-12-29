
int sequencia[100] = {};

int rodada_atual = 0;

int passo_atual_na_sequencia = 0;
 
int pinosLeds[4] = { 2, 4, 6, 8 };
int pinosBotoes[4] = { 3, 5, 7, 9 };

int botao_pressionado = 0;

int perdeu_o_jogo = false;
 
void setup() {
  for (int i = 0; i <= 3; i++) {
    pinMode(pinosLeds[i], OUTPUT);
  }
  
  for (int i = 0; i <= 3; i++) {
    pinMode(pinosBotoes[i], INPUT_PULLUP);
  }
 
  randomSeed(analogRead(0));
}
 
void loop() {
  if (perdeu_o_jogo) {
    int sequencia[100] = {};
    rodada_atual = 0;
    passo_atual_na_sequencia = 0;
    perdeu_o_jogo = false;
  }
  
  if (rodada_atual == 0) {
    Inicio();
    delay(500);
  }

  proximaRodada();
  // Reproduz a sequência atual.
  reproduzirSequencia();
  // Aguarda os botões serem pressionados pelo jogador.
  aguardarJogador();
 
  // Aguarda 1 segundo entre cada jogada.
  delay(1000);
}
 
// Sorteia um novo item e adiciona na sequência.
void proximaRodada() {
  int numero_sorteado = random(0, 4);
  sequencia[rodada_atual++] = numero_sorteado;
}
 
// Reproduz a sequência para ser memorizada.
void reproduzirSequencia() {
  for (int i = 0; i < rodada_atual; i++) {
    digitalWrite(pinosLeds[sequencia[i]], HIGH);
    delay(500);
    digitalWrite(pinosLeds[sequencia[i]], LOW);
    delay(100);
  }
}
 
// Aguarda o jogador iniciar sua jogada.
void aguardarJogador() {
  for (int i = 0; i < rodada_atual; i++) {
    aguardarJogada();
    
  // verifica a jogada  
  if (sequencia[passo_atual_na_sequencia] != botao_pressionado) {
      gameOver(); // perdeu
   }
   
   // para o jogo se perdeu
    if (perdeu_o_jogo) {
      break;
    }
     passo_atual_na_sequencia++;
  }
 
  // Redefine a variável para 0.
  passo_atual_na_sequencia = 0;
}
 
void aguardarJogada() {
  boolean jogada_efetuada = false;
  while (!jogada_efetuada) {
    for (int i = 0; i <= 3; i++) {
      if (!digitalRead(pinosBotoes[i])) {
        botao_pressionado = i;
 
        digitalWrite(pinosLeds[i], HIGH);
        delay(300);
        digitalWrite(pinosLeds[i], LOW);
 
        jogada_efetuada = true;
      }
    }
    delay(10);
  }
}
 
void gameOver() {
    for (int i = 0; i <= 3; i++) {
      digitalWrite(pinosLeds[i], HIGH);
      delay(200);
      digitalWrite(pinosLeds[i], LOW);
    }
 
    for (int i = 0; i <= 3; i++) {
      digitalWrite(pinosLeds[0], HIGH);
      digitalWrite(pinosLeds[1], HIGH);
      digitalWrite(pinosLeds[2], HIGH);
      digitalWrite(pinosLeds[3], HIGH);
      delay(100);
      digitalWrite(pinosLeds[0], LOW);
      digitalWrite(pinosLeds[1], LOW);
      digitalWrite(pinosLeds[2], LOW);
      digitalWrite(pinosLeds[3], LOW);
      delay(100);
    }
 
    perdeu_o_jogo = true;  
} 
 
void Inicio() {
  digitalWrite(pinosLeds[0], HIGH);
  digitalWrite(pinosLeds[1], HIGH);
  digitalWrite(pinosLeds[2], HIGH);
  digitalWrite(pinosLeds[3], HIGH);
  delay(500);
  digitalWrite(pinosLeds[0], LOW);
  digitalWrite(pinosLeds[1], LOW);
  digitalWrite(pinosLeds[2], LOW);
  digitalWrite(pinosLeds[3], LOW);
  delay(500);
}
