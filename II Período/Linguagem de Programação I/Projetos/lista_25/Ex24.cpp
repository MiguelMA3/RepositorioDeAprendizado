#include <stdio.h>
#include <locale.h>

main() {
	int matricula;
	float nota1, nota2, nota3, mediaex, mediaap;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nDigite o número de indentificação do aluno: ");
	scanf("%d", &matricula);
	
	printf("\nDigite a nota do 1 º Bimestre: ");
	scanf("%f", &nota1);
	printf("\nDigite a nota do 2 º Bimestre: ");
	scanf("%f", &nota2);
	printf("\nDigite a nota do 3 º Bimestre: ");
	scanf("%f", &nota3);
	printf("\nDigite a média dos exercícios: ");
	scanf("%f", &mediaex);
		
	mediaap = (nota1 + nota2 * 2 + nota3 * 3 + mediaex) / 7;
	
	printf("\n A média de aproveitamento foi: %.2f", mediaap);
}

