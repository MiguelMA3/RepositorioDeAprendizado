	#include <stdio.h>
	#include <locale.h>
	
	int main() {
		int num;
		
		setlocale(LC_ALL, "Portuguese");
		
		printf("\nDigite um número: ");
		scanf("%d", &num);
		
		if (num % 3 == 0 && num % 5 == 0) {
			printf("\nO número %d é divisível por 3 e 5!", num);
		} else if (num % 3 == 0 && num % 5 != 0) {
			printf("\nO número %d é divisível por 3, mas não por 5!", num);
		} else if (num % 3 != 0 && num % 5 == 0) {
			printf("\nO número %d não é divisível por 3, mas é por 5!", num);
		} else {
			printf("\nO número %d não é divisível por 3 ou 5!", num);
		}
	}
