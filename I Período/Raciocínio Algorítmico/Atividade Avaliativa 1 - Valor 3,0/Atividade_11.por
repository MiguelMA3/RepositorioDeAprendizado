programa
{
	
	funcao inicio()
	{	
		inteiro pagamento
		real valor
		
		escreva("O valor da compra deu R$100.00\n")
		escreva("\n(1)Dinheiro ou Cheque à vista\n(2)Cartão de Crédito à vista\n(3)Parcelado 2x sem juros\n(4)Parcelado 2x com juros")
		escreva("\nComo o  clienta efetuará o pagamento?")
		leia(pagamento)
		
		se (pagamento == 1){
			valor = 100 - (100 * 0.1)
			escreva("O valor cobrado foi: ", valor)
		} senao se (pagamento == 2) {
			valor = 100 - (100 * 0.15)
			escreva("O valor cobrado foi: ", valor)
		} senao se (pagamento == 3) {
			valor = 100
			escreva("O valor cobrado foi: ", valor)
		}senao se (pagamento == 4) {
			valor = 100 + (100 * 0.1)
			escreva("O valor cobrado foi: ", valor)
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 673; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */