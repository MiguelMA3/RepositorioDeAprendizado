#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
	int num = 6;
	int chute;
	
	setlocale(LC_ALL, "Portuguese");
	
	fflush(stdin);
	printf("Digite um número: ");
	scanf("%d", &chute);
	
	printf("\n%d", chute);
	
}
