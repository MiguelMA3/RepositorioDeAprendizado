#include <stdio.h>
#include <locale.h>
#include <string.h>

main() {
	char frase1[30] = "Eu prefiro Pepsi a Coca";
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("%s", frase1);
	
	strnset(frase1, ' ', 8);
	
	printf("\n%s", frase1);
}
