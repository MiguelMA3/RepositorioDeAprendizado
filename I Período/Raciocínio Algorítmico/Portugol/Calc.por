programa {
	funcao inicio() {
		real n1, n2, res
		caracter operacao
		
		escreva("Digite o 1� n�mero: ")
		leia(n1)
		
		escreva("Digite o 2� n�mero: ")
		leia(n2)
		
		escreva("Escolha a opera��o")
		escreva("soma(+) subtra��o(-) multiplica��o(*) divis�o(/)")
		leia(operacao)
		
		se(operacao == +) {
		    resultado = n1 + n2
		    escreva("Resultado = ")
		} senao se (operacao == -) {
		    resultado = n1 - n2
		    escreva("Resultado = ")
		} senao se (operacao == *){
		    resultado = n1 * n2
		    escreva("Resultado = ")
		} senao se (operacao == *){
		    resultado = n1 * n2
		    escreva("Resultado = ")
		} senao {
		    escreva("Opera��o Inv�lida")
		}
	}
}
