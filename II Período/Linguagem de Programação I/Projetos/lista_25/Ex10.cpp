#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	float salario = 0.0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Qual o sal�rio do funcion�rio? R$ ");
	scanf("%f", &salario);
	
	if (salario <= 300.00) {
		salario = salario + (salario * 0.5);
	} else if (salario > 300.00){
		salario = salario + (salario * 0.3);
	}
	
	printf("O sal�rio ajustado � de R$ %.2f", salario);
	
}
