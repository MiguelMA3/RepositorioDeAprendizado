	#include <stdio.h>
	#include <locale.h>
	
	int main() {
		int num;
		
		setlocale(LC_ALL, "Portuguese");
		
		printf("\nDigite um n�mero: ");
		scanf("%d", &num);
		
		if (num % 3 == 0 && num % 5 == 0) {
			printf("\nO n�mero %d � divis�vel por 3 e 5!", num);
		} else if (num % 3 == 0 && num % 5 != 0) {
			printf("\nO n�mero %d � divis�vel por 3, mas n�o por 5!", num);
		} else if (num % 3 != 0 && num % 5 == 0) {
			printf("\nO n�mero %d n�o � divis�vel por 3, mas � por 5!", num);
		} else {
			printf("\nO n�mero %d n�o � divis�vel por 3 ou 5!", num);
		}
	}
