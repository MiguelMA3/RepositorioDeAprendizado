pt1 = float(input('Qual a nota de Português 1° semestre?'))
pt2 = float(input('Qual a nota de Português 2° semestre?'))

en1 = float(input('Qual a nota de Inglês do 1° semestre?'))
en2 = float(input('Qual a nota de Inglês do 2° semestre?'))


media_pt = (pt1 + pt2) / 2
media_en = (en1 + en2) / 2

print(f'\nA média de Português é {media_pt:.1f}.\nA média de Inglês é {media_en:.2f}.')
