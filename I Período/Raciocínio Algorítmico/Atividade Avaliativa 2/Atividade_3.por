programa
{
	
	funcao inicio()
	{
		inteiro linha = 10
		real num, mult, res

		escreva("Digite um valor real: ")
		leia(num)
		
		escreva("\n\n-->Multiplicando o valor... ", num, "\n\n")
		mult = 1.0
			
		faca {
		    se (linha == 10) {
			    res = num * mult
			    escreva("\n", num, " X ", mult, " = ", res)
			    mult++
			    linha = 1
		    } senao {
		        res = num * mult
			    escreva("   ", num, " X ", mult, " = ", res)
			    mult++
			    linha++
		        }
		    } enquanto (mult <= 200)
		}
}