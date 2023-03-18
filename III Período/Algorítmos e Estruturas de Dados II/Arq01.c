#include <stdio.h>
#include <locale.h>
#include <windows.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    SetConsoleTitle("Ler e mostrar o conteúdo do Arquivo");

    FILE *arquivo = fopen("arquivo.txt", "r");
    
    printf("Arquivo criado com sucesso!");

    fclose(ponteiro_para_arquivo);

}
