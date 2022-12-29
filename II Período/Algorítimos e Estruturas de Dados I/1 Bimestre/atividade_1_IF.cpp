#include <stdio.h>
#include <locale.h>

int main() {
	
	char letra;
	//define uma variável tipo char
	
	setlocale(LC_ALL, "Portuguese");
	printf ("Digite uma letra: ");
	scanf ("%c", &letra);
	//leia letra inserida
	
	if(letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U' )
	{	
		printf("\nA letra %c é uma vogal.", letra);
	}
	else
	{	
		printf("\nA letra %c não é uma vogal, é uma consoante.", letra);
	}
	
}
