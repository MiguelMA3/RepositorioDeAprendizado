
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int func_menu(int opcao) {
		system("cls");
		setlocale(LC_ALL, "Portuguese");
		
		printf("ESTRUTURAS DE DADOS\n");
		printf("1 - Primitivas\n");
		printf("2 - Array\n");
		printf("3 - Pilha\n");
		printf("4 - Lista\n");
		printf("5 - �rvore\n");
		printf("6 - Grafo\n");
		printf("7 - Sair\n");
		fflush(stdin);
		printf("\nSelecione uma Op��o: ");
		scanf("%d", &opcao);
		
		return opcao;
}
void func_primitivas() {
	system("cls");
	printf("PRIMITIVAS - 1\n");
	
	printf("\nchar - Vari�vel do tipo caractere, sempre entre aspas duplas: ''a'', ''b'', ''c'', ...");
	printf("\nint - N�meros inteiros: 1, 2, 3...");
	printf("\nfloat - N�meros reais: 1.5, 34.78, 3.14, ...");
	printf("\nbool - Opera��es l�gicas: Verdadeiro(True) e Falso(False).");
	
	getch();
}

void func_array() {
	system("cls");
	printf("ARRAY - 2\n");
	
	printf("");
	printf("");
	printf("");
	printf("");
	
	getch();
}

void func_pilha() {
	system("cls");
	printf("PILHA - 3\n");
	getch();
}

void func_lista() {
	system("cls");
	printf("LISTA - 4\n");
	getch();
}

void func_arvore() {
	system("cls");
	printf("�RVORE - 5\n");
	getch();
}

void func_grafo() {
	system("cls");
	printf("GRAFO - 6\n");
	getch();
}

void main() {
	int opcao;
	
	do {
		opcao = func_menu(opcao);
	
		switch (opcao) {
			case 1:
				func_primitivas();
				system("pause");
				break;
			case 2:
				func_array();
				system("pause");
				break;
			case 3:
				func_pilha();
				system("pause");
				break;
			case 4:
				func_lista();
				system("pause");
				break;
			case 5:
				func_arvore();
				system("pause");
				break;
			case 6:
				func_grafo();
				system("pause");
				break;
			case 7:
				printf("\nBye!");
				exit(0);
			default:
				printf("\nOp��o Inv�lida!\n");
				
				system("\npause");
		
		}
	} while (opcao != 7);
}
