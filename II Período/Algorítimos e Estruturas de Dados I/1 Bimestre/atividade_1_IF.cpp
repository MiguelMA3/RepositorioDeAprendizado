#include <stdio.h>
#include <locale.h>

int main() {
	
	char letra;
	//define uma vari�vel tipo char
	
	setlocale(LC_ALL, "Portuguese");
	printf ("Digite uma letra: ");
	scanf ("%c", &letra);
	//leia letra inserida
	
	if(letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U' )
	{	
		printf("\nA letra %c � uma vogal.", letra);
	}
	else
	{	
		printf("\nA letra %c n�o � uma vogal, � uma consoante.", letra);
	}
	
}
