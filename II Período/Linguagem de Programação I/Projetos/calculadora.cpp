#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "calcula.h"

int main() {
	int n1, n2, op, res = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	fflush(stdin);
	printf("\nDigite o primeiro número: ");
	scanf("%d", &n1);
	
	fflush(stdin);
	printf("\nDigite o segundo número: ");
	scanf("%d", &n2);
	
	fflush(stdin);
	printf("\n(1)Soma (2)Subtração (3)Multiplicação (4)Divisão");
	printf("\nEscolha a operação: ");
	scanf("%d", &op);
	
	if (op == 1) {
		res = soma(n1, n2);
	} else if (op == 2) {
		res = sub(n1, n2);
	} else if (op == 3) {
		res = mult(n1, n2);
	} else if (op == 4) {
		res = divi(n1, n2);
	}
	
	printf("%d", res);
}

int soma(int num1, int num2) {
	int res = num1 + num2;
	
	return res;
}

int sub(int num1, int num2) {
	int res = num1 - num2;
	
	return res;
}

int mult(int num1, int num2) {
	int res = num1 * num2;
	
	return res;
}

int divi(int num1, int num2) {
	int res = num1 / num2;
	
	return res;
}
