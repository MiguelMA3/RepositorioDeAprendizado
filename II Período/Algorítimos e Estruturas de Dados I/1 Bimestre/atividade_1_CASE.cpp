#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main() {
	
	char letra;
	//define uma vari�vel tipo char
	
	setlocale(LC_ALL, "Portuguese");
	printf ("Digite uma letra: ");
	scanf ("%c", &letra);
	//leia letra inserida
	
	switch (toupper(letra)){
	
		case 'A':
		printf("\nA letra %c � uma vogal.", toupper(letra));
		break;
		
		case 'E':
		printf("\nA letra %c � uma vogal.", toupper(letra));
		break;
		
		case 'I':
		printf("\nA letra %c � uma vogal.", toupper(letra));
		break;
		
		case 'O':
		printf("\nA letra %c � uma vogal.", toupper(letra));
		break;
		
		case 'U':
		printf("\nA letra %c � uma vogal.", toupper(letra));
		break;
		
		default:
		printf("\nA letra %c n�o � uma vogal, � uma consoante.", toupper(letra));
		break;
			
	}
	
}
