#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct {
	char logradouro[15], nomeende[65], numero[5], complemento[55], bairro[30];
	char cidade[30], estado_provincia[30], pais[10];
} Endereco;

typedef struct {
	char dia[2], mes[2], ano[4];
} DataNasc;

typedef struct {
	int codigo;
	char nome[65];
	Endereco endereco;
	char email[25];
	DataNasc datanasc;
} Cliente;

Cliente vet_cliente[3];

void ficha (int posicao) { // OK
	printf("\n\nCódigo: %d", vet_cliente[posicao].codigo);
	printf("\nNome: %s", vet_cliente[posicao].nome);
	printf("\nData Nasc: %s / %s / %s", vet_cliente[posicao].datanasc.dia, vet_cliente[posicao].datanasc.mes, vet_cliente[posicao].datanasc.ano);
	printf("\nEndereço: %s, %s", vet_cliente[posicao].endereco.cidade, vet_cliente[posicao].endereco.estado_provincia);
	printf("\nEmail: %s", vet_cliente[posicao].email);
}

void cadastrar(int cliente) { // OK
	system("cls");
	printf("\n|| Cadastrando Cliente ||\n");
	
	fflush(stdin);
	printf("\Código...............");
	scanf("%d", &vet_cliente[cliente].codigo);
	
	fflush(stdin);
	printf("\nNome.................");
	gets(vet_cliente[cliente].nome);
	
	fflush(stdin);
	printf("\nData de Nascimento...");
	printf("\nDia: ");
	gets(vet_cliente[cliente].datanasc.dia);
	
	fflush(stdin);
	printf("\nMês: ");
	gets(vet_cliente[cliente].datanasc.mes);
	
	fflush(stdin);
	printf("\nAno: ");
	gets(vet_cliente[cliente].datanasc.ano);
	
	fflush(stdin);
	printf("\nEndereço.............");
	printf("\nLogradouro: ");
	gets(vet_cliente[cliente].endereco.logradouro);
	
	fflush(stdin);
	printf("\nNome Endereço: ");
	gets(vet_cliente[cliente].endereco.nomeende);
	
	fflush(stdin);
	printf("\nNúmero: ");
	gets(vet_cliente[cliente].endereco.numero);
	
	fflush(stdin);
	printf("\nComplemento: ");
	gets(vet_cliente[cliente].endereco.complemento);
	
	fflush(stdin);
	printf("\nBairro: ");
	gets(vet_cliente[cliente].endereco.bairro);
	
	fflush(stdin);
	printf("\nCidade: ");
	gets(vet_cliente[cliente].endereco.cidade);
	
	fflush(stdin);
	printf("\nEstado / Província: ");
	gets(vet_cliente[cliente].endereco.estado_provincia);
	
	fflush(stdin);
	printf("\nPaís: ");
	gets(vet_cliente[cliente].endereco.pais);

	fflush(stdin);
	printf("\nEmail................");
	gets(vet_cliente[cliente].email);
}

void consultar() { // OK
	int i;
	int teste = 0;
	
	for (i = 0; i < 3; i++) {
		if (vet_cliente[i].codigo != NULL) {
			teste++;
		} else if (vet_cliente[i].codigo == -1) {
			teste = teste;
		}
	}
	
	if (teste == 0) {
		printf("\nSISTEMA AINDA NÃO POSSUI NENHUM CLIENTE CADASTRADO!");
	} else {
		for (i = 0; i < 3; i++) {
			ficha(i);
		}
	}
	
	getch();
}

void alterar() { // OK
	int i, teste = 0, codigo;
	
	for (i = 0; i < 3; i++) {
		if(vet_cliente[i].codigo != NULL) {
			teste++;
		}
	}
	
	if (teste == 0) {
		printf("\nSISTEMA AINDA NÃO POSSUI NENHUM CLIENTE CADASTRADO!");
	} else {
		printf("\nInsira o código do cliente a ser alterado: ");
		scanf("%d", &codigo);
		
		for (i = 0; i < 3; i++) {
			if (codigo == vet_cliente[i].codigo) {
				do {
					int alterar = 0;
					
					printf("\n1 - Nome: %s", vet_cliente[i].nome);
					printf("\n2 - Data Nasc: %s / %s / %s", vet_cliente[i].datanasc.dia, vet_cliente[i].datanasc.mes, vet_cliente[i].datanasc.ano);
					printf("\n3 - Endereço: %s, %s", vet_cliente[i].endereco.cidade, vet_cliente[i].endereco.estado_provincia);
					printf("\n4 - Email: %s", vet_cliente[i].email);
					printf("\n5 - Cancelar");
					printf("\n\nO que será alterado?");
					scanf("%d", &alterar);
					
					switch (alterar) {
						case 1:
							printf("\nInsira o novo Nome: ");
							gets(vet_cliente[i].nome);
							break;
						case 2:
							printf("\nInsira a nova Data de Nascimento: ");
							
							printf("\nDia: ");
							gets(vet_cliente[i].datanasc.dia);
							printf("\nMês: ");
							gets(vet_cliente[i].datanasc.mes);
							printf("\nAno: ");
							gets(vet_cliente[i].datanasc.ano);
							break;
						case 3:
							printf("\nInsira o novo Endereço: ");
							
							printf("\nLogradouro: ");
							gets(vet_cliente[i].endereco.logradouro);
	
							printf("\nNome Endereço: ");
							gets(vet_cliente[i].endereco.nomeende);
							
							printf("\nNúmero: ");
							gets(vet_cliente[i].endereco.numero);
							
							printf("\nComplemento: ");
							gets(vet_cliente[i].endereco.complemento);
							
							printf("\nBairro: ");
							gets(vet_cliente[i].endereco.bairro);
							
							printf("\nCidade: ");
							gets(vet_cliente[i].endereco.cidade);
							
							printf("\nEstado / Província: ");
							gets(vet_cliente[i].endereco.estado_provincia);
							
							printf("\nPaís: ");
							gets(vet_cliente[i].endereco.pais);
							break;
						case 4:
							printf("\nInsira o novo Email: ");
							gets(vet_cliente[i].email);
							break;
						case 5:
							printf("\nOperação Cancelada!");
							getch();
							return 1;
						default:
							printf("\nOpção Inválida!");
							getch();
							system("cls");
							break;
					}
				} while (alterar != 5);
			}
		}
	}
}

void excluir() { // OK
	int i, teste = 0;
	int codigo;
	
	for (i = 0; i < 3; i++) {
		if(vet_cliente[i].codigo != NULL) {
			teste++;
		}
	}
	
	if (teste == 0) {
		printf("\nSISTEMA AINDA NÃO POSSUI NENHUM CLIENTE CADASTRADO!");
	} else {
		system("cls");
		printf("\nDigite o código do cliente a ser excluído: ");
		scanf("%d", &codigo);
		
		for (i = 0; i < 3; i++) {
			if (codigo == vet_cliente[i].codigo) {
				printf("\nCliente: %s", vet_cliente[i].nome);
				printf("\nDeletando os dados...");
				getch();
				
				vet_cliente[i].codigo = -1;
			}
		}
	}
	getch();
}

int menu(int opcao) { // OK
	system("cls");
	
	printf("|| Registro de Clientes ||\n");
	printf("\n1 - Cadastrar");
	printf("\n2 - Consultar");
	printf("\n3 - Alterar");
	printf("\n4 - Excluir");
	printf("\n5 - Sair");
	
	fflush(stdin);
	printf("\n\nSelecione uma opção: ");
	scanf("%d", &opcao);
	
	return opcao;
}

void main() { // OK
	char opcao, tecla;
	int cliente_atual = -1;
	
	setlocale(LC_ALL, "Portuguese");
	
	do {
		opcao = menu(opcao);
			
		switch (opcao) {	
			case 1:
				cliente_atual = cliente_atual + 1;
				cadastrar(cliente_atual);
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
			default:
				printf("\nOpção Inválida!");
				getch();
				system("cls");
				break;
		}
	} while (opcao != 5);
}
