#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	float nota[3], media = 0.00;
	
	setlocale(LC_ALL, "Portuguese");
	
	for (int i = 0; i < 3; i++) {
		fflush(stdin);
		printf("\nDigite a nota do %dº Bimestre: ", i + 1);
		scanf("%f", &nota[i]);
		
		media = media + nota[i];
	}
	
	media = media / 3;
	
	printf("\n\nA média do aluno é %.1f", media);
	
	if (media >= 6.00) {
		printf("\nAPROVADO!");
	} else {
		printf("\nREPROVADO!");
	}
	
}
