
nome = str(input("Nome: "))
username = str(input("Username: "))
senha = str(input("Senha: "))
while senha == username or senha == nome:
    print("A senha não pode ser igual ao usuário!")
    senha = str(input("Senha: "))


qualusuario = str(input("Usuário: "))
qualsenha = str(input("Senha: "))

while qualsenha != senha:
    str(input("Informe a senha correta: "))

if qualsenha == senha:
    print(f"Bem-Vindo {nome}!")
