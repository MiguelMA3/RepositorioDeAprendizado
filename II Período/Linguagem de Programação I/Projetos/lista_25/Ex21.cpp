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
		printf("O número %s é um palíndromo!", numero);
	} else {
		printf("O número %s não é um palíndromo.", numero);
	}
	
}
