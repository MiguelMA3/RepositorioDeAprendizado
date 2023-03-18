#include <stdio.h>
#include <locale.h>
#include <windows.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    SetConsoleTitle("EX03 - Criar Arquivo em Pasta");

    if(CreateDirectory("C:\\teste2", NULL))   {
        printf("Pasta criada com sucesso!");
    } else {
        printf("A pasta já existe!");
    }

    FILE *p;

    p = fopen("C:\\testes2\\dados.txt", "w");
    printf("\nArquivo criado com sucesso!");

    fclose(p);
    
}
