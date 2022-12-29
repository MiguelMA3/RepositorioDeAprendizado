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
	printf("Número de caracteres: %d", car);
	
}

main() {
	char texto[2000] = "Meu nome é Yoshikage Kira. Tenho 33 anos. \nMinha casa fica na parte nordeste de Morioh, onde todas as casas estão, e eu não sou casado. \nEu trabalho como funcionário das lojas de departamentos Kame Yu \ne chego em casa todos os dias às oito da noite, no máximo. \nEu não fumo, mas ocasionalmente bebo. \nEstou na cama às 23 horas e me certifico de ter oito horas de sono, não importa o que aconteça. \nDepois de tomar um copo de leite morno e fazer cerca de vinte minutos de alongamentos antes de ir para a cama, \ngeralmente não tenho problemas para dormir até de manhã. \nAssim como um bebê, eu acordo sem nenhum cansaço ou estresse pela manhã. \nFoi-me dito que não houve problemas no meu último check-up. \nEstou tentando explicar que sou uma pessoa que deseja viver uma vida muito tranquila. \nEu cuido para não me incomodar com inimigos, como ganhar e perder, isso me faria perder o sono à noite. \nÉ assim que eu lido com a sociedade e sei que é isso que me traz felicidade. \nEmbora, se eu fosse lutar, não perderia para ninguém.";
		
	setlocale(LC_ALL, "Portuguese");
	
	printf("%s", texto);
	
	contar_char(texto);
		
}

