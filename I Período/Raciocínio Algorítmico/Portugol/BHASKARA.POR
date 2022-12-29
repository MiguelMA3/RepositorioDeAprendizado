programa {
	inclua biblioteca Matematica --> mat
	funcao inicio() {
		real a, b, c, delta, x1, x2
		
		escreva("Digite o valor de a: ")
		leia(a)
		
		escreva("Digite o valor de b: ")
		leia(b)
		
		escreva("Digite o valor de c: ")
		leia(c)
		
		delta = b*b - 4*a*c
		escreva("\n\nDelta = ", b,"² - 4 * ", a, " * ", c, "\n")
		escreva("Delta = ", delta, "\n\n")
		
		escreva("x' = (-(", b, ") + // Delta)/2*a\n")
		x1 = (-b + mat.raiz(delta, 2.0)) / (2*a)
		escreva("x' = ", x1, "\n")
		
		escreva("x'' = (-(", b, ") - // Delta)/2*a\n")
		x2 = (-b - mat.raiz(delta, 2)) / (2*a)
		escreva("x'' = ", x2, "\n")
		
	}
}
