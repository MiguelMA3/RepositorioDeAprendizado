#include <stdio.h>
#include <locale.h>
#include <string.h>

main() {
	char frase1[20] = "Olá Mundo!", frase2[20] = "Esse é meu Programa!";
	
	setlocale(LC_ALL, "Portuguese");
	
	strncat(frase1, frase2, 8);
	
	printf("%s", frase1);
}
