#include <stdio.h>
#include <locale.h>

main() {
	int matricula;
	float nota1, nota2, nota3, mediaex, mediaap;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nDigite o n�mero de indentifica��o do aluno: ");
	scanf("%d", &matricula);
	
	printf("\nDigite a nota do 1 � Bimestre: ");
	scanf("%f", &nota1);
	printf("\nDigite a nota do 2 � Bimestre: ");
	scanf("%f", &nota2);
	printf("\nDigite a nota do 3 � Bimestre: ");
	scanf("%f", &nota3);
	printf("\nDigite a m�dia dos exerc�cios: ");
	scanf("%f", &mediaex);
		
	mediaap = (nota1 + nota2 * 2 + nota3 * 3 + mediaex) / 7;
	
	printf("\n A m�dia de aproveitamento foi: %.2f", mediaap);
}

