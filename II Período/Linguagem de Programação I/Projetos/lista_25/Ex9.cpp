#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	int num = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	if (num < 0 && num % 3 == 0) {
		printf("\nO número %d é negativo e é múltiplo de 3!", num);
	} else if (num < 0 && num % 3 != 0) {
		printf("\nO número %d é negativo, mas não é múltiplo de 3!", num);
	} else if (num >= 0 && num % 3 == 0) {
		printf("\nO número %d é positivo e é múltiplo de 3!", num);
	} else if (num >= 0 && num % 3 != 0) {
		printf("\nO número %d é positivo, mas não é múltiplo de 3!", num);
	}
}
