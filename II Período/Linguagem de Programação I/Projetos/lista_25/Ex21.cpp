#include <stdio.h>
#include <locale.h>
#include <string.h>

main() {
	char numero[5], numerorev[5];
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um numero: ");
	scanf("%s", &numero);
	
	strupr(numero);
	
	strrev(numero);
	strcpy(numerorev, numero);
	strrev(numero);
	
	if (!memcmp(numerorev, numero, strlen(numero))) {
		printf("O n�mero %s � um pal�ndromo!", numero);
	} else {
		printf("O n�mero %s n�o � um pal�ndromo.", numero);
	}
	
}
