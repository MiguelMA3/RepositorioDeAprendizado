#include <stdio.h>  // Inclui a biblioteca com as fun��es de Entrada e Sa�da
#include <stdlib.h> // Inclui a biblioteca com fun��es b�sicas e que podem ser �teis
#include <string.h> // Biblioteca para manipula��o de strings
#include <time.h>   // Biblioteca com fun��es relacionadas ao tempo
#include "forca.h"  // Biblioteca espec�fica do projeto

// Decarando vari�veis globais
char palavrasecreta[TAMANHO_PALAVRA];
char chutes[26];
int chutesdados = 0;

// Verifica se um caractere est� no vetor
int letraexiste(char letra) {
	
	for(int j = 0; j < strlen(palavrasecreta); j++) {
		if (letra == palavrasecreta[j]) {
			return 1;
		}
	}
	
	return 0;
}

// 
int chuteserrados() {
	int erros = 0;

	for(int i = 0; i < chutesdados; i++) {

		if(!letraexiste(chutes[i])) { //
			erros++;
		}	
	}

	return erros;
}

//
int enforcou() {
	return chuteserrados() >= 5;
}

//
int ganhou() {
	for(int i = 0; i < strlen(palavrasecreta)) {
		if(!jachutou(palavrasecreta[i])) {
		return 0;
		}
	}

	return 1;
}

//
void abertura() {
	printf("/****************/\n");
	printf("/ Jogo de Forca */\n");
	printf("/****************/\n\n");
}

//
void chuta() {
	char chute;
	printf("Qual letra? ");
	scanf(" %c", chute);

	if(letraexiste(chute)) {
		printf("Você acertou: a palavra tem a letra %c\n\n", chute);
	} else {
		printf("\nVocê errou: a palavra NÃO tem a letra %c\n\n", chute);
	}

	chutes[chutesdados] = chute;
	chutesdados++;
}

//
int jachutou(char letra) {
	int achou = 0;

	for(int j = 0; j < chutesdados; j++) {
		if(chutes[j] = letra) {
			achou = 1;
			break;
		}
	}
	return achou;
}

//
void desenhaforca() {

	int erros = chuteserrados(); //

	/* Refatore o código dessa função
	para que sejam impressas as variáveis:

	char cabeca[3] = "   ";  (_)
	char bracos[3] = "   ";  \|/
	char tronco    = " ";     |
	char pernas[2] = "   ";  / \
	
	SEM ALTERAR O RESULTADO DESEJADO
	*/

	printf("  _______       \n");
	printf(" |/      |      \n");
	printf(" |      %c%c%c  \n", (erros>=1?'(':' '), (erros>=1?'_':' '), (erros>=1?')':' '));
	printf(" |      %c%c%c  \n", (erros>=3?'\\':' '), (erros>=2?'|':' '), (erros>=3?'/': ' '));
	printf(" |       %c     \n", (erros>=2?'|':' '));
	printf(" |      %c %c   \n", (erros>=4?'/':' '), (erros>=4?'\\':' '));
	printf(" |              \n");
	printf("_|___           \n");
	printf("\n\n");
	
	//
	for(int i = 0; i < strlen(palavrasecreta); i++) {
	
		if(jachutou(palavrasecreta[i])) {
			printf("%d ", palavrasecreta[i]);
		} else {
			printf("_ ");
		}	

	}
	
	printf("\n");
	}

//
void escolhepalavra() {
	FILE* f; //
	
	f = fopen("palavras.txt", "r"); //
	
	//
	if(f == 0) {
		printf("Banco de dados de palavras não disponível\n\n");
		exit(1);
	}

	int qtddepalavras;

	fscanf(f, "%d", &qtddepalavras); //

	//
	srand(time(0));
	int randomico = rand() % qtddepalavras;

	//
	for(int i = 0; i < randomico; i++) {
		fscanf(f, "%s", palavrasecreta); //
	}

	fclose(f); //
}

//
void adicionapalavra() {
	char quer;

	printf("Você deseja adicionar uma nova palavra no jogo (S/N)?");
	scanf(" %c", quer);
	
	if(quer == 'S') {
	char novapalavra[TAMANHO_PALAVRA];
	
	printf("Digite a nova palavra, em letras maiúsculas: ");
	scanf("%s", novapalavra);
	
	FILE* f; //
	
	f = fopen("palavras.txt", "r+"); //
	if(f == 0) {
	printf("Banco de dados de palavras não disponível\n\n");
	exit(1);
	}
	
	int qtd;
	fscanf(f, "%d", &qtd); //
	qtd++;
	fseek(f, 0, SEEK_SET); //
	fprintf(f, "%d", qtd); //
	
	fseek(f, 0, SEEK_END);
	fprintf(f, "\n%s", novapalavra); //
	
	fclose(f);
	}
}

// Fun��o que imprime a mensagem de vit�ria
void parabens() {
	printf("\nParab�ns, voc� ganhou!\n\n");
	
	printf("       ___________      \n");
	printf("      '._==_==_=_.'     \n");
	printf("     .-\\:      /-.    \n");
	printf("     | (|:.     |) |    \n");
	printf("      '-|:.     |-'     \n");
	printf("        \\::.   /      \n");
	printf("         '::. .'        \n");
	printf("           ) (          \n");
	printf("         _.' '._        \n");
	printf("        '-------'       \n\n");
}

// Fun��o que imprime a mensagem de derrota
void enforcado(){
	printf("\nLamento, voc� foi enforcado!\n");
	printf("A palavra era **%s**\n\n", palavrasecreta);
	
	printf("    _______________         \n");
	printf("   /               \\       \n"); 
	printf("  /                 \\      \n");
	printf("//                   \\\\   \n");
	printf("\\|   XXXX     XXXX   |/    \n");
	printf("  |   XXXX     XXXX   |      \n");
	printf("  |   XXX       XXX   |      \n");
	printf("  |                   |      \n");
	printf("  \\__      XXX      __/     \n");
	printf("    |\\     XXX     /|       \n");
	printf("    | |           | |        \n");
	printf("    | I I I I I I I |        \n");
	printf("    |  I I I I I I  |        \n");
	printf("    \\_            _/       \n");
	printf("     \\_         _/         \n");
	printf("       \\_______/           \n");
}

// Fun��o principal
int main() {
	abertura(); //
	escolhepalavra(); //

	// controla a intera��oo dos chutes dados pelo jogador
	do {
		desenhaforca(); //
		chuta(); //
	} while (!ganhou() && !enforcou()); //

	if(ganhou()) { // Compara se o jogador ganhou o jogo
		parabens(); // Imprime a mensagem de vit�ria
	} else {
		enforcado(); // Imprime a mensagem de derrota
	}

	/* Implemente uma melhoria no projeto 
	a fim de permitir que o usuário insira 
	uma nova palavra antes de iniciar a forca.
	*/

	adicionapalavra(); // Permite ao usu�rio acrescentar uma nova palavra ao jogo
}
