#include <stdio.h>
#include <stdlib.h>

int tabuada(int mult) {
	for (int i = 1; i <= 10; i++) {
		printf("\n %d X %d = %d", mult, i, mult * i);
	}
}

int main() {
	int num;
	
	fflush(stdin);
	scanf("%d", &num);
	
	tabuada(num);
}
