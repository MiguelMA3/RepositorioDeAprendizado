programa
{
	
	funcao inicio()
	{
		inteiro a, b, c, maior, meio, menor
		
		escreva("Digite o valor A: ")
		leia(a)
		
		escreva("Digite o valor B: ")
		leia(b)
		
		escreva("Digite o valor C: ")
		leia(c)

		se(a > b e b > c) {
			maior = a
        		meio = b
        		menor = c

        		escreva("\n", maior)
       		escreva("\n", meio)
       		escreva("\n", menor)
    		} senao se (a > c e c > b) {
         		maior = a
         		meio = c
         		menor = b

         		escreva("\n", maior)
       		escreva("\n", meio)
       		escreva("\n", menor)
    		} senao se (b > a e a > c) {
         		maior = b
         		meio = a
         		menor = c

         		escreva("\n", maior)
       		escreva("\n", meio)
       		escreva("\n", menor)
          } senao se (b > c e c > a) {
         		maior = b
         		meio = c
         		menor = a

         		escreva("\n", maior)
       		escreva("\n", meio)
       		escreva("\n", menor)
         	} senao se (c > a e a > b) {
         		maior = c
         		meio = a
         		menor = b

         		escreva("\n", maior)
       		escreva("\n", meio)
       		escreva("\n", menor) 
		
         	} senao se (c > b e b > a) {
         		maior = c
         		meio = b
         		menor = a

         		escreva("\n", maior)
       		escreva("\n", meio)
       		escreva("\n", menor) 
		
         	}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 376; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */