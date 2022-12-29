programa
{
	
	funcao inicio()
	{
		real hora = 0.0, min = 0.0, seg = 0.0, segac = 0.0, massa = 10.0
        inteiro h,m,s

		escreva("Qual a massa do objeto em gramas? ")
		leia(massa)

		faca {
			seg++
            
			segac = segac + seg
			
			se (seg == 50.0) {
				massa = (massa - (massa / 2.0))
				seg = 0.0
			}

		} enquanto (massa >= 0.5)

        hora = (segac/(60))/60
        h = hora

        min = (hora-h)*60
        m = min

        segac = (min-m)*60
        s = segac
        
		escreva("O processo levou ", h, " horas, ", m, " minutos e ", s, " segundos.")
		
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 586; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */