#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char nome[5][55];

void correcao() {
	
	int x, y, z;
	char ordem[55];

	for (x = 0; x <= 3; x++) {

		for (y = x + 1; y <= 3; y++) {

			z = strcmp(nome[x], nome[y]);

			if (z > 0) {
				strcpy(ordem, nome[x]);
				strcpy(nome[x], nome[y]);
				strcpy(nome[y], ordem);

			}
		}
	}
}

void main() {
	int x;
	
	printf("\nDigite 5 nomes: ");

	for (x = 0; x < 5; x++) {
		gets(nome[x]);
	}
	
	correcao();
	
	for (x = 0; x < 5; x++) {
		printf("\n%s", nome[x]);
	}
}
