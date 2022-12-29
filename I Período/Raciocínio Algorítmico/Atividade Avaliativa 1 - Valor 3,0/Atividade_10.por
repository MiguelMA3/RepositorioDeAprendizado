programa
{
	
inclua biblioteca Texto --> text
	funcao inicio()
	{
		real peso, altura, imc
		
		escreva("=======================")
		escreva("\nCalculadora de IMC\n")
		escreva("=======================\n\n")

		escreva("Masculino(M) Feminino(F)")
		escreva("\nDigite seu peso: ")
		leia(peso)

		escreva("Digite sua altura: ")
		leia(altura)
		
		imc = peso / (altura*altura)

		se (imc < 18.5) {
			escreva("Seu peso está abaixo da média")
		} senao se (imc >= 18.5 e imc <= 25) {
			escreva("Seu peso está na média")
			} senao se (imc > 25 e imc < 30){
				escreva("Seu peso está acima da média")
				} senao se (imc > 30) {
					escreva("Você é classificado como OBESO")
					}
		
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 681; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */