
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
	char nome[55];
	
	setlocale(LC_ALL, "Portuguese");
	
	fflush(stdin);
	printf("Digite um nome: ");
	scanf("%s", &nome);
	
	system("cls");
	printf("%s", nome);
}
