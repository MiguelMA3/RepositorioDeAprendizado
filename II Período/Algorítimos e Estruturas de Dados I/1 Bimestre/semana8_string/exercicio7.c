#include <stdio.h>
#include <locale.h>
#include <string.h>

main() {
	char frase1[20] = "Eu gosto de ", frase2[20];
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("%s\n\n", frase1);
	scanf("%s", frase2);
	strncat(frase1, frase2, 20);
	
	printf("\n\n%s", frase1);
}
