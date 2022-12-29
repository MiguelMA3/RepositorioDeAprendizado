#include <stdio.h>
#include <locale.h>
#include <string.h>

main() {
	char frase[10] = "AAAAAAAAAA";
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("%s", frase);
	
	strnset(frase, 'B', 5);
	
	printf("\n%s", frase);
}
