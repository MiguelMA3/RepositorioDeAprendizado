#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	int num, maior = -9999;
	
	setlocale(LC_ALL, "Portuguese");
	
	for (int i = 0; i < 3; i++) {
		fflush(stdin);
		printf("\nDigite um n�mero: ");
		scanf("%d", &num);
		
		if (num > maior) {
			maior = num;
		}
	}
	
	printf("\n\nO maior n�mero digitado foi: %d", maior);
	
}
