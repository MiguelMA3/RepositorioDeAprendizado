
def faz_processamento_de_visualizacao(lista):
  print(len(lista))
  lista.append(13)

idades = [16, 21, 29, 56, 43]
faz_processamento_de_visualizacao(idades)
print(idades)

def faz_processamento_de_visualizacao(lista = []):
  print(len(lista))
  print(lista)
  lista.append(13)

faz_processamento_de_visualizacao()

faz_processamento_de_visualizacao()

faz_processamento_de_visualizacao()

faz_processamento_de_visualizacao()

def faz_processamento_de_visualizacao(lista = list()):
  print(len(lista))
  print(lista)
  lista.append(13)

faz_processamento_de_visualizacao()
faz_processamento_de_visualizacao()

def faz_processamento_de_visualizacao(lista = None):
  if lista == None:
    lista = list()
  print(len(lista))
  print(lista)
  lista.append(13)

faz_processamento_de_visualizacao()
faz_processamento_de_visualizacao()
faz_processamento_de_visualizacao()
faz_processamento_de_visualizacao()