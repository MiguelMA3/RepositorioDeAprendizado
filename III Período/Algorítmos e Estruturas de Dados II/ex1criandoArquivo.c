#include <stdio.h>
#include <locale.h>
#include <windows.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    SetConsoleTitle("EX01 - Criar Arquivo");

    FILE *ponteiro_para_arquivo;

    ponteiro_para_arquivo = fopen("dados.txt", "w");
    printf("Arquivo criado com sucesso!");

    fclose(ponteiro_para_arquivo);

}