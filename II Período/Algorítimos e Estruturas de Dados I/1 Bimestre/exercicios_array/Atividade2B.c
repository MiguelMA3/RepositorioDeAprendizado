#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	int vetor[100], i;
	
	srand(time(NULL));
	setlocale(LC_ALL, "Portuguese");
	
	for (i = 0; i < 100; i++) {
		vetor[i] = i+1;
	}
	
	for (i = 0; i < 100; i++) {
	//printf("\n%d � N�mero: ", i+1);
	printf("\nContando... %d", vetor[i]);
	}

}
