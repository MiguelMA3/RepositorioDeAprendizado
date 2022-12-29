import csv, pickle, json
from abc import ABC, abstractclassmethod

class ContatoDao(ABC):

    @abstractclassmethod
    def buscar_todos(self, caminho):
        pass

    @abstractclassmethod
    def salvar(self, contatos, caminho):
        pass

class ContatoDaoJSON(ContatoDao):

    @abstractclassmethod
    def buscar_todos(self, caminho):
        contatos = []
        with open(caminho, mode='r') as arquivo:
            contatos_json = json.load(arquivo)
            for contato in contatos_json:
                c = contato(**contato)
                contatos.append(c)

        return contatos   

    @abstractclassmethod
    def salvar(self, contatos, caminho):
        with open(caminho, mode='w') as arquivo:
            json.dump(contatos, arquivo, default=lambda objeto: objeto.__dict__) 