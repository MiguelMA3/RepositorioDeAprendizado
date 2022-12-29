
def interface():
    print(f'Aluno: {aluno1._aluno}')
    print(f'Série: {aluno1._ano}°')
    print('Matéria: Matemática')
    print(f'1° Semestre: {aluno1._nota1}')
    print(f'2° Semestre: {aluno1._nota2}')

    media = (aluno1._nota1 + aluno1._nota2) / 2
    print(f'Média: {media:.1f}')

class Sistema_Escola:
    def __init__(self, aluno, ano):
        self._aluno = aluno
        self._ano = ano
        self._nota1 = 0
        self._nota2 = 0

    def alterar_nota(self):
        print('(1)1° Semestre - (2)1° Semestre')

        semestre = int(input('Qual semestre deseja alterar? '))

        if(semestre == 1):
            self._nota1 = float(input('Nota = '))
        elif(semestre == 2):
            self._nota2 = float(input('Nota = '))

        print('Nota alterada com sucesso!')

aluno1 = Sistema_Escola('Pedro', 8)
interface()

aluno1.alterar_nota()
aluno1.alterar_nota()

interface()
