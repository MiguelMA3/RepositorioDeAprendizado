#include <stdio.h>
#include <locale.h>

main() {
	float salbrt, salliq;
	float imposto;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o sal�rio bruto do funcion�rio: ");
	scanf("%f", &salbrt);
	
	if (salbrt <= 2000) {
		imposto = 0.0007;
	} else if (salbrt > 2000) {
		imposto = 0.02;
	}
	
	salliq = salbrt - (salbrt * imposto);
	
	printf("\nO sal�rio l�quido �: %.2f", salliq);
}
