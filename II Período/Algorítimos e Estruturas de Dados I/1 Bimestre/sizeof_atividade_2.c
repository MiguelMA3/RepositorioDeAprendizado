#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	
	char endereco[73];
	
	setlocale(LC_ALL, "Portuguese");
		
	printf("\CHAR[73] : %d", sizeof(endereco));
	
}
