#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
	
	char str1[20] = "Eu sou ", str2[20] = "seu Pai!";
	
	setlocale(LC_ALL, "portuguese");
	
	strncat(str1, str2, 20);
	
	printf("%s", str1);
}
