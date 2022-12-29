c_oposto = float(input('Valor do cateto oposto: '))
c_adjacente = float(input('Valor do cateto adjacente: '))

hipotenusa = (c_adjacente ** 2 + c_oposto ** 2) ** (1/2)

print(f'Hipotenusa = {round(hipotenusa)}')