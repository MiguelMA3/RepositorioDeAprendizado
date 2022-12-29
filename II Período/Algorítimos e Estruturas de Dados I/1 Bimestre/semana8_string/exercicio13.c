#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
	
	char str1[20] = "Olá ", str2[20] = "Mundo!";
	
	setlocale(LC_ALL, "portuguese");
	
	strncat(str1, str2, 20);
	
	printf("%s", str1);
}
