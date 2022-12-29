programa {
	funcao inicio() {
		real n1, n2, res
		caracter operacao
		
		escreva("Digite o 1° número: ")
		leia(n1)
		
		escreva("Digite o 2° número: ")
		leia(n2)
		
		escreva("Escolha a operação")
		escreva("soma(+) subtração(-) multiplicação(*) divisão(/)")
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
		    escreva("Operação Inválida")
		}
	}
}
