#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	float salario = 0.0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Qual o salário do funcionário? R$ ");
	scanf("%f", &salario);
	
	if (salario <= 300.00) {
		salario = salario + (salario * 0.5);
	} else if (salario > 300.00){
		salario = salario + (salario * 0.3);
	}
	
	printf("O salário ajustado é de R$ %.2f", salario);
	
}
