#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	int num = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	if (num < 0 && num % 3 == 0) {
		printf("\nO n�mero %d � negativo e � m�ltiplo de 3!", num);
	} else if (num < 0 && num % 3 != 0) {
		printf("\nO n�mero %d � negativo, mas n�o � m�ltiplo de 3!", num);
	} else if (num >= 0 && num % 3 == 0) {
		printf("\nO n�mero %d � positivo e � m�ltiplo de 3!", num);
	} else if (num >= 0 && num % 3 != 0) {
		printf("\nO n�mero %d � positivo, mas n�o � m�ltiplo de 3!", num);
	}
}
