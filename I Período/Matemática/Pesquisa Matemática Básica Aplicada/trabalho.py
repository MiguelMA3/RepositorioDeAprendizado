# Criação de sites


# Designs simples


# Somar os preços dos itens comprados
itens = []

def adicionar_item():
    item_comprado = scanner.entrada()
    itens.append(item_comprado)

valor_total = preço_itens.soma()


# Capacidade média do estoque
quantidade_min = int(input("Qual a quantidade mínima?"))
quantidade_max = int(input("Qual a quantidade máxima?"))

estoque_medio = (quantidade_min + quantidade_max)/2

print("A média do estoque é de {}".format(estoque_medio))


#Calculadora
print("Soma(+) Subtração(-) Multiplicação(*) Divisão(/)")
operacao = str(input("Qual a Operação?"))
num1 = int(input("Qual o primeiro número?")
num2 = int(input("Qual o segundo número?")

if operacao == "+":
    resultado = num1 + num2
elif operacao == "-":
    resultado = num1 - num2
elif operacao == "*":
    resultado = num1 * num2
elif operacao == "/":
    resultado = num1 / num2
else:
    print("Operação inválida.")

print(f"O resultado do cálculo é: {resultado}")