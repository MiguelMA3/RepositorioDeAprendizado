#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	char sexo;
	int h;
	float peso_ideal;
	
	setlocale(LC_ALL, "Portuguese");
	
	fflush(stdin);
	printf("\n(M) Masculino - (F) Feminino");
	printf("\nQual seu sexo? ");
	scanf("%c", &sexo);
	
	fflush(stdin);
	printf("\nQual sua altura em cm? ");
	scanf("%d", &h);
	
	if (sexo == 'm' || sexo == 'M') {
		peso_ideal = (72.7 * (h / 100)) - 58;
	} else if (sexo == 'f' || sexo == 'F') {
		peso_ideal = (62.1 * (h / 100)) - 44.7;
	}
	
	printf("\nSeu peso ideal é %.2f", peso_ideal);

}
