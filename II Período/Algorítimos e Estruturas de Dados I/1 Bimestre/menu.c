
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
		printf("5 - Árvore\n");
		printf("6 - Grafo\n");
		printf("7 - Sair\n");
		fflush(stdin);
		printf("\nSelecione uma Opção: ");
		scanf("%d", &opcao);
		
		return opcao;
}
void func_primitivas() {
	system("cls");
	printf("PRIMITIVAS - 1\n");
	
	printf("\nchar - Variável do tipo caractere, sempre entre aspas duplas: ''a'', ''b'', ''c'', ...");
	printf("\nint - Números inteiros: 1, 2, 3...");
	printf("\nfloat - Números reais: 1.5, 34.78, 3.14, ...");
	printf("\nbool - Operações lógicas: Verdadeiro(True) e Falso(False).");
	
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
	printf("ÁRVORE - 5\n");
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
				printf("\nOpção Inválida!\n");
				
				system("\npause");
		
		}
	} while (opcao != 7);
}
