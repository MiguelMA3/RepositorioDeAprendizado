#include <stdio.h>
#include <locale.h>

int main() {
	int x, y;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nDigite o valor x: ");
	scanf("%d", &x);

	if (x < 1) {
		y = x;
	} else if (x == 1) {
		y = 0;
	} else if (x > 1) {
		y = x*x;
	}
	
	printf("\nO valor de Y é: %d", y);
}
