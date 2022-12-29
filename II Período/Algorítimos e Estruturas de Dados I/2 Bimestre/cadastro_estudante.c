#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct {
	int matricula;
	char nome[65];
	char curso[35];
	char endereco[65];
	char email[25];
	int colocacao;
	float med_ves;
} Estudante;

Estudante vet_estud[3];

void ficha (int posicao) {
	printf("\nMatrícula: %d", vet_estud[posicao].matricula);
	printf("\nNome: %s", vet_estud[posicao].nome);
	printf("\nCurso: %s", vet_estud[posicao].curso);
	printf("\nEndereço: %s", vet_estud[posicao].endereco);
	printf("\nEmail: %s", vet_estud[posicao].email);
	printf("\nColocação: %d", vet_estud[posicao].colocacao);	
	printf("\nMédia Vestibular: %.2f", vet_estud[posicao].med_ves);
}

void cadastrar(int estud) {
	system("cls");
	printf("\n|| Cadastrando Aluno ||\n");
	
	fflush(stdin);
	printf("\nMatrícula............");
	scanf("%d", &vet_estud[estud].matricula);
	
	fflush(stdin);
	printf("\nNome.................");
	gets(vet_estud[estud].nome);
	
	fflush(stdin);
	printf("\nCurso................");
	gets(vet_estud[estud].curso);
	
	fflush(stdin);
	printf("\nEndereço.............");
	gets(vet_estud[estud].endereco);

	
	fflush(stdin);
	printf("\nEmail................");
	gets(vet_estud[estud].email);
	
	fflush(stdin);
	printf("\nColocação............");
	scanf("%d", &vet_estud[estud].colocacao);
	
	printf("\nMédia Vestibular.....");
	scanf("%f", &vet_estud[estud].med_ves);
}

void consultar() {
	int i;
	int teste = 0;
	
	for (i = 0; i < 3; i++) {
		if (vet_estud[i].matricula != NULL) {
			teste++;
		} else if (vet_estud[i].matricula == -1) {
			teste = teste;
		}
	}
	
	if (teste == 0) {
		printf("\nSISTEMA AINDA NÃO POSSUI NENHUM ESTUDANTE MATRICULADO!");
	} else {
		for (i = 0; i < 3; i++) {
			ficha(i);
		}
	}
	
	getch();
}

void alterar() {
	int i, teste = 0, matricula;
	
	for (i = 0; i < 3; i++) {
		if(vet_estud[i].matricula != NULL) {
			teste++;
		}
	}
	
	if (teste == 0) {
		printf("\nSISTEMA AINDA NÃO POSSUI NENHUM ESTUDANTE MATRICULADO!");
	} else {
		printf("\nInsira a matrícula a ser alterada: ");
		scanf("%d", &matricula);
		
		for (i = 0; i < 3; i++) {
			if (matricula == vet_estud[i].matricula) {
				do {
					int alterar = 0;
					
					printf("\n1 - Nome: %s", vet_estud[i].nome);
					printf("\n2 - Curso: %s", vet_estud[i].curso);
					printf("\n3 - Endereço: %s", vet_estud[i].endereco);
					printf("\n4 - Email: %s", vet_estud[i].email);
					printf("\n5 - Colocação: %d", vet_estud[i].colocacao);	
					printf("\n6 - Média Vestibular: %f", vet_estud[i].med_ves);
					printf("\n7 - Cancelar");
					printf("\n\nO que será alterado? ");
					fflush(stdin);
					scanf("%d", &alterar);
					
					switch (alterar) {
						case 1:
							fflush(stdin);
							printf("Insira o novo Nome: ");
							gets(vet_estud[i].nome);
							break;
						case 2:
							fflush(stdin);
							printf("Insira o novo Curso: ");
							gets(vet_estud[i].curso);
							break;
						case 3:
							fflush(stdin);
							printf("Insira o novo Endereço: ");
							gets(vet_estud[i].endereco);
							break;
						case 4:
							fflush(stdin);
							printf("Insira o novo Email: ");
							gets(vet_estud[i].email);
							break;
						case 5:
							fflush(stdin);
							printf("Insira a nova Colocação: ");
							scanf("%d", &vet_estud[i].colocacao);
							break;
						case 6:
							fflush(stdin);
							printf("Insira a nova Média: ");
							scanf("%f", vet_estud[i].med_ves);
							break;
						case 7:
							printf("\nOperação Cancelada!");
							getch();
							return 1;
						default:
							printf("\nOpção Inválida!");
							getch();
							system("cls");
							break;
							
						printf("\nFicha Alterada!");
						getch();
					}
				} while (alterar != 7);
			}
		}
	}
	getch();
}

void excluir() {
	int i, teste = 0;
	int matricula;
	
	for (i = 0; i < 3; i++) {
		if(vet_estud[i].matricula != NULL) {
			teste++;
		}
	}
	
	if (teste == 0) {
		printf("\nSISTEMA AINDA NÃO POSSUI NENHUM ESTUDANTE MATRICULADO!");
	} else {
		system("cls");
		printf("\nDigite a matrícula a ser excluída: ");
		scanf("%d", &matricula);
		
		for (i = 0; i < 3; i++) {
			if (matricula == vet_estud[i].matricula) {
				printf("\nEstudante: %s", vet_estud[i].nome);
				printf("\nDeletando o estudante...");
				getch();
				
				vet_estud[i].matricula = -1;
			}
		}
	}
	getch();
}

void easter_egg() {

	system("cls");
	
	printf("\nSURPRISE!!!\n");
	printf("\nMatrícula: 202213147");
	printf("\nNome: Miguel Maletzke de Avelar");
	printf("\nCurso: Sistemas de Informação");
	
	getch();
}

int menu(int opcao) {
	system("cls");
	
	printf("|| Portal Institucional ||\n");
	printf("\n1 - Matricular");
	printf("\n2 - Consultar");
	printf("\n3 - Alterar");
	printf("\n4 - Excluir");
	printf("\n5 - Sair");
	
	fflush(stdin);
	printf("\n\nSelecione uma opção: ");
	scanf("%d", &opcao);
	
	return opcao;
}

void main() {
	char opcao, tecla;
	int estud_atual = -1;
	
	setlocale(LC_ALL, "Portuguese");
	
	do {
		opcao = menu(opcao);
		
		tecla = getch();
		
		if (tecla == 0) { //Se pressionar F9
			opcao = -getch();
		}
			
		switch (opcao) {	
			case 1:
				estud_atual = estud_atual + 1;
				cadastrar(estud_atual);
				break;
			case 2:
				consultar();
				break;
			case 3:
				alterar();
				break;
			case 4:
				excluir();
				break;
			case 5:
				printf("\nBye!");
				getch();
				exit(0);
			case -67:
				easter_egg();
				break;
			default:
				printf("\nOpção Inválida!");
				getch();
				system("cls");
				break;
		}
	} while (opcao != 5);
}
