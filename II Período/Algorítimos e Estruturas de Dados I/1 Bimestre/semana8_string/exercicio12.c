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
	strrev(palavra); //retorna a palavra � forma original
	
	if (!memcmp(palavrarev, palavra, strlen(palavra))) {
		printf("A palavra %s � um pal�ndromo!", palavra);
	} else {
		printf("A palavra %s n�o � um pal�ndromo.", palavra);
	}
	
}

