multiplicador = 1

numero = int(input("Qual tabuada?"))
while numero > 10:
    print("O número deve ser menor que 10!")
    numero = int(input("Qual tabuada?"))


while (multiplicador <= 10):
    print(f"{numero} X {multiplicador} = {numero * multiplicador}")
    multiplicador = multiplicador + 1