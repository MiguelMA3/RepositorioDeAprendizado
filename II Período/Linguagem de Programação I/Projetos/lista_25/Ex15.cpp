#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	int num = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	if (num < 0 && num % 2 == 0) {
		printf("\nO n�mero %d � negativo e � par!", num);
	} else if (num < 0 && num % 2 != 0) {
		printf("\nO n�mero %d � negativo e � �mpar!", num);
	} else if (num >= 0 && num % 2 == 0) {
		printf("\nO n�mero %d � positivo e � par!", num);
	} else if (num >= 0 && num % 2 != 0) {
		printf("\nO n�mero %d � positivo e � �mpar!", num);
	}
}
