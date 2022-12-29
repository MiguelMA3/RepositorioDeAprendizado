#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main() {
	int vetor[50], i;
	
	srand(time(NULL));
	setlocale(LC_ALL, "Portuguese");
	
	for (i = 0; i < 50; i++) {
		vetor[i] = rand() % 100;
	}
	
	for (i = 0; i < 50; i++) {
	printf("\n%d º Número: ", i+1);
	printf("%d", vetor[i]);
	}

}
