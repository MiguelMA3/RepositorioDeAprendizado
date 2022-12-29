#include <stdio.h>
#include <locale.h>
#include <string.h>

main() {
	char palavra1[20],palavra2[20];
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite uma string: ");
	scanf("%s", &palavra1);
	
	printf("Digite outra string: ");
	scanf("%s", &palavra2);
	
	int compara = strcmp(palavra1, palavra2);
	
	if(compara < 0) {
    	printf("A string %s é menor que a string %s.", strupr(palavra1), strupr(palavra2));
	} else if(compara > 0) {
		printf("A string %s é maior que a string %s.", strupr(palavra1), strupr(palavra2));
   	} else {
    	printf("A string %s é igual à string %s.", strupr(palavra1), strupr(palavra2));
	}
}
