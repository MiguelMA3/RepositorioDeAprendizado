programa {
	funcao inicio() {
		cadeia nome, sobrenome, sexo, profissao, cidade
		inteiro idade
		
		escreva("#==> Digite seu nome: ")
		leia(nome)
		
		escreva("#==> Digite seu sobrenome: ")
		leia(sobrenome)

		escreva("#==> Digite sua idade: ")
		leia(idade)
		
		escreva("#==> Digite seu sexo: ")
		leia(sexo)
		
		escreva("#==> Qual sua profissão? ")
		leia(profissao)
		
		escreva("#==> Digite a cidade que você mora: ")
		leia(cidade)
		
		escreva("Carregando Perfil...\n\n")
		escreva("|==========@==========|\n", " Nome: ", nome," ",sobrenome, "\n", " Idade: ", idade, "\n", " Sexo: ", sexo, "\n", " Profissão: ", profissao, "\n", " Cidade: ", cidade, "\n|==========@==========|")
	}
}
