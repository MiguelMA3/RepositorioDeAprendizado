
a = float(input('Valor de A: ')) #1
b = float(input('Valor de B: ')) #-5
c = float(input('Valor de C: ')) #+2

print(f'{str(a)}x² {str(b)}x + {c} = 0')

delta = (b**2) - (4*(a*c))

if a == 0:
    print('O valor de a, deve ser diferente de 0')
elif delta < 0:
    print('Sem raízes reais')
else:
    x1 = (-b + delta ** (1 / 2)) / (2 * a)
    x2 = (-b - delta ** (1 / 2)) / (2 * a)

    print(f'x1= {x1}, x2= {x2}')
