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
