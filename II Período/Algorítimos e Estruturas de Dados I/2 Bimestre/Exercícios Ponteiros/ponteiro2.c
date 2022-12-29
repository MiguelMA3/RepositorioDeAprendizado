#include <stdio.h>
#include <locale.h>

void funcao1(int valor_de_x){
	
	int x;
	x = valor_de_x;
	printf("o valor de x é %d e o endereço é 0x%X",x,&x );
	
}

void funcao2(int aux){
	
	int y = aux;
	printf("\no valor de y é %d e o endereço é 0x%X", y, &y);
	
}

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	funcao1(7);
	funcao2(11);
	
}
