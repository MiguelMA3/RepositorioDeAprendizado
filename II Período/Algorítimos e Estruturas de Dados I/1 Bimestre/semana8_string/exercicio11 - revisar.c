#include <stdio.h>
#include <locale.h>
#include <string.h>

int contar_char(char string[2000]) {
	int car = strlen(string);
	int palavras = 0, linhas = 1, i = 0;
	
		while (string[i] < car) {
			if((string == ' ') || (string == '\n')) {
				palavras++;	
			} else if ((string != ' ') || (string == '\n')) {
				linhas++;
			}
			
			i++;
		}
		
	printf("\n\n");
	printf("N�mero de caracteres: %d", car);
	
}

main() {
	char texto[2000] = "Meu nome � Yoshikage Kira. Tenho 33 anos. \nMinha casa fica na parte nordeste de Morioh, onde todas as casas est�o, e eu n�o sou casado. \nEu trabalho como funcion�rio das lojas de departamentos Kame Yu \ne chego em casa todos os dias �s oito da noite, no m�ximo. \nEu n�o fumo, mas ocasionalmente bebo. \nEstou na cama �s 23 horas e me certifico de ter oito horas de sono, n�o importa o que aconte�a. \nDepois de tomar um copo de leite morno e fazer cerca de vinte minutos de alongamentos antes de ir para a cama, \ngeralmente n�o tenho problemas para dormir at� de manh�. \nAssim como um beb�, eu acordo sem nenhum cansa�o ou estresse pela manh�. \nFoi-me dito que n�o houve problemas no meu �ltimo check-up. \nEstou tentando explicar que sou uma pessoa que deseja viver uma vida muito tranquila. \nEu cuido para n�o me incomodar com inimigos, como ganhar e perder, isso me faria perder o sono � noite. \n� assim que eu lido com a sociedade e sei que � isso que me traz felicidade. \nEmbora, se eu fosse lutar, n�o perderia para ningu�m.";
		
	setlocale(LC_ALL, "Portuguese");
	
	printf("%s", texto);
	
	contar_char(texto);
		
}

