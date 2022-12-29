programa
{
	
	funcao inicio()
	{
		real v1 = 1.0, v2 = 2.0, v3 = 3.0, soma = 0.0, prod = 0.0, med = 0.0

		enquanto(v1 < v2 e v2 < v3) {
			escreva("\nDigite um valor: ")
			leia(v1)

			escreva("\nDigite um valor: ")
			leia(v2)

			escreva("\nDigite um valor: ")
			leia(v3)

			soma = v1 + v2 + v3
			prod = v1 * v2 * v3
			med = (v1 + v2 + v3) / 3

			escreva("\nA soma é ", soma, ", o produto é ", prod, ", e a média é ", med, "\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 446; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */