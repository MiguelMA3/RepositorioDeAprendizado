programa
{
	
	funcao inicio()
	{
		inteiro num = 0, mult = 1, res

		enquanto (num < 10) {
			escreva("\n\n-->Tabuada do ", num)
			mult = 1
			
			faca {
				res = num * mult
				escreva("\n", num, " X ", mult, " = ", res)
				mult++
			} enquanto (mult <= 10)
			
			num++
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 115; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */