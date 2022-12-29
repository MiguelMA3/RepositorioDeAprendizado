programa {
	funcao inicio() {
		real num1, num2, resultado
		cadeia operacao
		
		escreva("\nDigite o 1° número: ")
		leia(num1)
		
		escreva("\nDigite o 2° número: ")
		leia(num2)
		
		escreva("\nEscolha a operação")
		escreva("soma(+) subtração(-) multiplicação(*) divisão(/)")
		leia(operacao)

		
		se(operacao == "+") {
		    resultado = num1 + num2
		    escreva("\nResultado: ", resultado)
		} senao se (operacao == "-") {
		    resultado = num1 - num2
		    escreva("\nResultado: ", resultado)
		} senao se (operacao == "*"){
		    resultado = num1 * num2
		    escreva("\nResultado: ", resultado)
		} senao se (operacao == "/"){
		    resultado = num1 / num2
		    escreva("\nResultado: ", resultado)
		} senao {
		    escreva("\nOperação Inválida")
		}
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 604; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */