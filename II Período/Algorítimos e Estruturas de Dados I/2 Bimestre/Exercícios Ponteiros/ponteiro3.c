#include <stdio.h>
#include <locale.h>

void main(){
	int m = 10, n = 1, o = 0;
	int *z;

	setlocale(LC_ALL, "Portuguese");

	z = &m;
	
	printf("\nO valor de m é %d\to valor de n é %d\to valor de o é %d", m, n, o);
	
	printf("\n\n\t\tO endereço de m é %p", &m);
	printf("\n\t\tO endereço de m é 0x%X", &m);
	printf("\n\t\tO endereço de m é %p", *z);
	printf("\n\t\tO endereço de m é 0x%X", *z);
	printf("\n\t\tO endereço de n é %p", &n);
	printf("\n\t\tO endereço de n é 0x%X", &n);
	printf("\n\t\tO endereço de o é %p", &o);
	printf("\n\t\tO endereço de o é 0x%X\n", &o);
		
}
