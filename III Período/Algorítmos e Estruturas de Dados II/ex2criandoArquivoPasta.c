#include <stdio.h>
#include <locale.h>
#include <windows.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    SetConsoleTitle("EX02 - Criar Arquivo em Pasta");

    system("mkdir C:\\testes");

    printf("\nPasta criada com sucesso!");

    FILE *ponteiro_para_arquivo;

    ponteiro_para_arquivo = fopen("C:\\testes\\dados.txt", "w");
    printf("Arquivo criado com sucesso!");

    fclose(ponteiro_para_arquivo);
    
}