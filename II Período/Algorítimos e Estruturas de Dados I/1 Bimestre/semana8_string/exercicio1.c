#include <stdio.h>
#include <locale.h>
#include <string.h>

main() {
	char palavra[20];
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite uma string: ");
	scanf("%s", &palavra);
	
	printf("O tamanho da string digitada é %d.", strlen(palavra));
}
