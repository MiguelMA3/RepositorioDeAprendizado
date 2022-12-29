#include <stdio.h>
#include <locale.h>
#include <string.h>

main() {
	char palavra[20], palavrarev[20];
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite uma palavra: ");
	scanf("%s", &palavra);
	
	strupr(palavra);
	
	strrev(palavra); //inverte a palavra
	strcpy(palavrarev, palavra); // guarda a palavra invertida
	strrev(palavra); //retorna a palavra à forma original
	
	if (!memcmp(palavrarev, palavra, strlen(palavra))) {
		printf("A palavra %s é um palíndromo!", palavra);
	} else {
		printf("A palavra %s não é um palíndromo.", palavra);
	}
	
}

