programa
{
	
	funcao inicio()
	{
		inteiro id
		cadeia aluno = "nome", A = "Aprovado", B = "Aprovado", C = "Aprovado", D = "Reprovado", E = "Reprovado", resultado = "Em análise"
		
		inteiro nt1, nt2, nt3, me, ma
		///notas 1, 2 e 3; media dos exercicios, media de aproveitamento

		escreva("Bem Vindo Professor!\n\n")
		escreva("Insira o ID de 4 dígitos do aluno: ")
		leia(id)

		se (id <= 2500) {
			aluno = "Pedro"
		} senao se (id > 2500 e id <= 5000) {
			aluno = "João"
		} senao se (id > 5000 e id <= 7500) {
			aluno = "Ana"
		} senao se (id > 7500) {
			aluno = "Bruna"
		} senao {
			escreva("ID do aluno inválido")
		}

		escreva("\nDigite a nota 1: ")
		leia(nt1)

		escreva("\nDigite a nota 2: ")
		leia(nt2)

		escreva("\nDigite a nota 3: ")
		leia(nt3)

		escreva("\nDigite a média dos exercícios: ")
		leia(me)
		
		ma = (nt1 + (nt2 * 2) + (nt3 * 3) + me) / 7 
		
		se (ma >= 90) {
			resultado = A
		} senao se (ma >= 75 e ma < 90) {
			resultado = B
		} senao se (ma >= 60 e ma < 75) {
			resultado = C
		} senao se (ma >= 40 e ma < 60) {
			resultado = D
		} senao se(ma < 40) {
			resultado = E
		}

		escreva("\n\nAluno: ", aluno, "\nMédia: ", ma, "\nResultado Final: ", resultado)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1216; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */