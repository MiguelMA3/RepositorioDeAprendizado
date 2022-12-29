#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	int num = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	if (num < 0 && num % 2 == 0) {
		printf("\nO número %d é negativo e é par!", num);
	} else if (num < 0 && num % 2 != 0) {
		printf("\nO número %d é negativo e é ímpar!", num);
	} else if (num >= 0 && num % 2 == 0) {
		printf("\nO número %d é positivo e é par!", num);
	} else if (num >= 0 && num % 2 != 0) {
		printf("\nO número %d é positivo e é ímpar!", num);
	}
}
