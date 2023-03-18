/*- Exercício 04 - Elabore um menu de opções que oferece:
    Adicionar Funcionário
    Excluir Funcionário
    Alterar dados Funcionário
    Mostrar dados de um Funcionário
    Listar todos os Funcionários
    Sair
  Obs.: O funcionamento será via ARQUIVO
  Struct:
  struct funcionario
  {
    int Matricula;
    char Nome[55];
    struct Data_Admissao   dt_admissao;
    struct Data_Nascimento dt_nasc;
    float Salario;
    int Centro_Custos;
    int Dependentes;    
  };*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

struct {
	int matricula;
	char nome[55];
	struct DataNasc dtNasc;
	struct DataAdmissao dtAdmissao;
	float salario;
	int centroCustos;
	int dependentes;
	
} Funcionario;

struct {
	int diaNasc, mesNasc, anoNasc;
} DataNasc;

struct {
	int diaAdmissao, mesAdmissao, anoAdmissao;	
} DataAdmissao;

void addFunc() {
	
}

void excFunc() {
	
}

void altFunc() {
	
}

void verFunc() {
	
}

void listaFunc() {
	
}



void main() {
	setlocale(LC_ALL, "Portuguese");
	
	
}
