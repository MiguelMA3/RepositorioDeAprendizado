#include <stdio.h>
#include <locale.h>

int main() {
	int num[4], maior = 0, soma = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	for (int i = 0; i < 4; i++) {
		printf("\nDigite um número: ");
		scanf("%d", &num[i]);
		
		if (num[i] > maior) {
			maior = num[i];
		}	
	}
	
	for (int i = 0; i < 4; i++) {
		if (num[i] != maior) {
			soma = soma + num[i];
		}
	}
	
	printf("\nA soma dos menores números é: %d", soma);
}
