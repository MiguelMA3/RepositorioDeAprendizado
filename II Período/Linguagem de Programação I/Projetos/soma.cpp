
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
	int size = 5, num[size], i = 0, sum = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	for(i; i < size; i++) {
		fflush(stdin);
		printf("\nDigite um n�mero: ");
		scanf("%d", &num[i]);
		
		sum = sum + num[i];
	}
	
	printf("\nA soma dos n�meros inseridos �: %d", sum);
}
