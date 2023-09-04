programa
{	
	funcao inicio()
	{
		real a, b, c, ab

		escreva("Digite o valor A: ")
		leia(a)

		escreva("Digite o valor B: ")
		leia(b)

		escreva("Digite o valor C: ")
		leia(c)

		ab = a + b
		
		se (ab < c) {
			escreva("A soma de A e B é menor que C")		
		} senao {
			escreva("A soma de A e B não é menor que C")
		}
	}
}
