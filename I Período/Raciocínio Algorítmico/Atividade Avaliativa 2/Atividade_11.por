programa
{
	
	funcao inicio()
	{
		inteiro valor = 0, somap = 0, somai = 0

		escreva("Multiplicador de Números\n")
		escreva("Digite um valor maior que 1000 para encerrar a soma\n\n")
		
		enquanto (valor <= 1000) {
			escreva("\nDigite um valor: ")
			leia(valor)

			se (valor % 2 == 0 e valor <= 1000) {
				somap = somap + valor
			} senao se (valor <= 1000) {
				somai = somai + valor
			}
		}

		escreva("\nA soma dos valores pares é: ", somap)
		escreva("\nA soma dos valores ímpares é: ", somai)
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 508; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */