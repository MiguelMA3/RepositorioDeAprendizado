programa
{
	
	funcao inicio()
	{
		real valor = 1.0, prod = 1.0

		escreva("Multiplicador de Números\n")
		escreva("Digite 0 para encerrar o cálculo\n\n")
		
		enquanto (valor != 0) {
			escreva("Digite um valor: ")
			leia(valor)

			se (valor != 0) {
				prod = prod * valor
			} senao {
				prod = prod
			}
		}

		escreva("O resultado da multiplicação é: ", prod)
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 373; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */