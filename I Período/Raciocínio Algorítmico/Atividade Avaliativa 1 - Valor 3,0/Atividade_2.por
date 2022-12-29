programa
{
	inclua biblioteca Texto --> text
	funcao inicio()
	{
		cadeia nome, sexo, estadocivil, tempocasada
		
		escreva("Digite seu nome: ")
		leia(nome)

		escreva("\nMasculino(M) Feminino(F)")
		escreva("\nDigite seu sexo: ")
		leia(sexo)

		escreva("Digite seu estado civil: ")
		leia(estadocivil)

		se (text.caixa_alta(sexo) == "F" e text.caixa_alta(estadocivil) == "CASADA") {
			escreva("A quanto tempo você é casada? ;D : ")
			leia(tempocasada)
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 65; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */