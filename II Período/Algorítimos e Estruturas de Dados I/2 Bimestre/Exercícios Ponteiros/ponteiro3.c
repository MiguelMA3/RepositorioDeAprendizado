#include <stdio.h>
#include <locale.h>

void main(){
	int m = 10, n = 1, o = 0;
	int *z;

	setlocale(LC_ALL, "Portuguese");

	z = &m;
	
	printf("\nO valor de m � %d\to valor de n � %d\to valor de o � %d", m, n, o);
	
	printf("\n\n\t\tO endere�o de m � %p", &m);
	printf("\n\t\tO endere�o de m � 0x%X", &m);
	printf("\n\t\tO endere�o de m � %p", *z);
	printf("\n\t\tO endere�o de m � 0x%X", *z);
	printf("\n\t\tO endere�o de n � %p", &n);
	printf("\n\t\tO endere�o de n � 0x%X", &n);
	printf("\n\t\tO endere�o de o � %p", &o);
	printf("\n\t\tO endere�o de o � 0x%X\n", &o);
		
}
