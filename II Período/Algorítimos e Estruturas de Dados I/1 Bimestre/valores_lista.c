#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	int num, valores[] = {90, 55, 1, 678, 1, 1020, 90, 78, 90, 124, 71, 90, 1020, 1, 55}, i, posicao[5], contador = 0;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um número: ");
	scanf("%d", num);
	
	for(i = 0; i < 20; i++) {
		if (num == valores[i]) {
			posicao[i] = i;
			contador++;
		}
	}
	
	if(contador == 1) {
		printf("O número %d está na posição %d da lista!", num, posicao);
	} else if(contador > 1) {
		printf("O número %d aparece %d vezes e está nas posição %d da lista!", num, contador, posicao);
	} else {
		printf("O número não está na lista");
	}
}
