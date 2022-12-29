#include <stdio.h>
#include <locale.h>

int main() {
	char vendedor[55];
	float salbrt, salliq, vendas, comissao = 0.15;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nDigite o nome do vendedor: ");
	gets(vendedor);
	
	printf("\nDigite o salário bruto do vendedor: R$");
	scanf("%f", &salbrt);
	
	printf("\nDigite o total em vendas do colaborador: R$");
	scanf("%f", &vendas);
	
	salliq = salbrt + (vendas * comissao);
	
	printf("\n\n||====================||");
	printf("\nVendedor: %s", vendedor);
	printf("\nVendas: %.2f",  vendas);
	printf("\nSalário: %.2f", salliq);
	printf("\n||====================||");
}
