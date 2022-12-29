programa {
	funcao inicio() {
	    inteiro num
		
		escreva("Digite um valor: ")
		leia(num)
		
		se(num % 2 == 0){
		    num = num + 5
		    escreva(num)
		} senao {
		    num = num + 8
		    escreva(num)
		}
	}
}
