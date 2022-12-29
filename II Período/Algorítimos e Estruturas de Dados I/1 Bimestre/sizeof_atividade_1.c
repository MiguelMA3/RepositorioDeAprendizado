#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	
	char caractere = 'a';
	int inteiro = 1;
	float real = (1,5);
	
	setlocale(LC_ALL, "Portuguese");
		
	printf("\CHAR : %d", sizeof(caractere));
	printf("\nINT  : %d", sizeof(inteiro));
	printf("\nFLOAT: %d", sizeof(real));

}
