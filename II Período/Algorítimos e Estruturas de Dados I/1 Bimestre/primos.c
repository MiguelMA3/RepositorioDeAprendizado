#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	int num, vetprimos[1000], quebralinha = 0, i = 0;
	setlocale(LC_ALL, "Portuguese");
	
	do {
		num++;
		
		if ((num == 2 | num % 2 != 0) && (num == 3 | num % 3 != 0) && (num == 5 | num % 5 != 0) && (num == 7 | num % 7 != 0)) {
			vetprimos[i] = num;
			i++;		
		} else {
			continue;
		}
		
	} while (i < 1000);
	
	for(i = 0; i < 1000; i++){
		
		quebralinha++;
		
		if (quebralinha > 10){
			printf("\n\n");
			quebralinha = 0;
		} else {
			printf("\t%d", vetprimos[i]);
		}
	}
}
