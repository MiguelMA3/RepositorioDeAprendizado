#include <stdio.h>
#include <locale.h>
#include <string.h>

main() {
	char palavra1[20],palavra2[20];
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite uma string: ");
	scanf("%s", &palavra1);
	
	printf("Digite outra string: ");
	scanf("%s", &palavra2);
	
	strncat(palavra1, palavra2, 20);
	
	printf("\n%s", palavra1);
}
