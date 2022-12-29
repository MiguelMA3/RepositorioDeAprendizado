programa
{
	inclua biblioteca Texto --> text
	funcao inicio()
	{
		cadeia sexo
		real altura, imc
		
		escreva("=======================")
		escreva("\nCalculadora de IMC\n")
		escreva("=======================\n\n")

		escreva("Masculino(M) Feminino(F)")
		escreva("\nDigite seu sexo: ")
		leia(sexo)

		escreva("Digite sua altura: ")
		leia(altura)

		se (text.caixa_alta(sexo) == "M") {
			imc = (72.7 * altura) - 58
			escreva("\n\nSeu IMC é: ", imc)
		} senao se (text.caixa_alta(sexo) == "F") {
			imc = (62 * altura) - 44.7
			escreva("\n\nSeu IMC é: ", imc)
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 568; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */