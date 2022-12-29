#include <stdio.h>
#include <locale.h>

int main() {
	int peso[3] = {2, 3, 5};
	float nota[3], media = 0.0;
	
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n|| Insira as notas em valores de 0 a 10 ||\n");
	
	for (int i = 0; i < 3; i++) {
		printf("\nDigite a nota %d: ", i + 1);
		scanf("%f", &nota[i]);
		
		media = media + (peso[i] * (nota[i] / 10));
		
	}

	printf("\nMédia do Aluno: %.1f", media);
}
