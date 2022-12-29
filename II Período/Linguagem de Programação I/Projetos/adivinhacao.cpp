#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>

main() {
	int chute, chances = 0, tentativa = 0, dificuldade = 0, max, num, escolha = 1;
	double pontos = 1000;
	bool acertou;
	
	srand(time(NULL));
	setlocale(LC_ALL, "Portuguese");
	
	while (escolha != 2) {
		escolha = 1;
		tentativa = 0;
		system("cls");
		
		printf("\nBem Vindo ao Jogo de Adivinha��o.");
		printf("\n\nNoob(1) Expert(2) Pro(3) Master(4) Legend(5)");
		fflush(stdin);
		printf("\nSelecione a Dificuldade: ");
		scanf("%d", &dificuldade);
		system("cls");
		
		switch (dificuldade) {
			case 1:
				max = 50;
				chances = 3;
				break;
			case 2:
				max = 100;
				chances = 3;
				break;
			case 3:
				max = 500;
				chances = 5;
				break;
			case 4:
				max = 1000;
				chances = 7;
				break;
			case 5:
				max = 5000;
				chances = 10;
				break;
		}
		
		num = rand() % max;
		
		printf("\nVoc� possui %d tentativas.", chances);
		
		for (tentativa; tentativa < chances; tentativa++) {
			fflush(stdin);
			printf("\n\nDigite um n�mero entre 0 e %d: ", max);
			scanf("%d", &chute);
			
			acertou = chute == num;
			
			if (acertou) {
				break;
			} else if (chute > 0 && chute < num) {
				printf("\nVoc� errou. Seu chute � menor que o n�mero.");
			} else if (chute < 0 or chute > max) {
				printf("\n\nSeu chute foi inv�lido! Digite um n�mero entre 0 e %d", max);
				tentativa--;
			} else if (chute > num && chute <= max) {
				printf("\nVoc� errou. Seu chute � maior que o n�mero.");
			}
			
			double pontosperdidos = (abs(chute - num)) / 2.0;
			pontos = pontos - pontosperdidos;
			
		}
		system("cls");
		
		if (chute == num) {
				printf("Voc� acertou! O n�mero era %d.\n", num);
			} else {
				printf("Voc� perdeu. O n�mero era %d.\n", num);
				pontos = 0;
			}
			
		printf("Sua pontua��o �: %.2f", pontos);
		
		printf("\n\n(1)SIM (2)N�O");
		printf("\nDeseja continuar?... ");
		scanf("%d", &escolha);
		
	}
}
