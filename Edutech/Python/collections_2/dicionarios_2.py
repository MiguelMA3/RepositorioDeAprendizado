
aparicoes = {
  "Guilherme" : 1,
  "cachorro" : 2,
  "nome" : 2,
  "vindo" : 1
}

aparicoes["Carlos"] = 1

aparicoes

aparicoes["Carlos"] = 2

aparicoes

del aparicoes["Carlos"]

aparicoes

"cachorro" in aparicoes

"Carlos" in aparicoes

for elemento in aparicoes:
  print(elemento)

for elemento in aparicoes.keys():
  print(elemento)

for elemento in aparicoes.values():
  print(elemento)

1 in aparicoes.values()

for elemento in aparicoes.keys():
  valor = aparicoes[elemento]
  print(elemento, valor)

for elemento in aparicoes.items():
  print(elemento)

for chave, valor in aparicoes.items():
  print(chave, "=", valor)

["palavra {}".format(chave) for chave in aparicoes.keys()]
