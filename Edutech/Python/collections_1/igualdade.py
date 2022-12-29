class ContaSalario:
  
  def __init__(self, codigo):
    self._codigo = codigo
    self._saldo = 0
  
  def deposita(self, valor):
    self._saldo += valor
    
  def __str__(self):
    return "[>>Codigo {} Saldo {}<<]".format(self._codigo, self._saldo)

conta1 = ContaSalario(37)
print(conta1)

conta2 = ContaSalario(37)
print(conta2)

conta1 == conta2

contas = [conta1]
conta1 in contas

conta2 in contas


class ContaSalario:
  
  def __init__(self, codigo):
    self._codigo = codigo
    self._saldo = 0
    
  def __eq__(self, outro):
    return self._codigo == outro._codigo
  
  def deposita(self, valor):
    self._saldo += valor
    
  def __str__(self):
    return "[>>Codigo {} Saldo {}<<]".format(self._codigo, self._saldo)

conta1 = ContaSalario(37)
conta2 = ContaSalario(37)
conta1 == conta2

conta1 != conta2

conta1 in [conta2]

conta2 in [conta1]

class ContaSalario:
  
  def __init__(self, codigo):
    self._codigo = codigo
    self._saldo = 0
    
  def __eq__(self, outro):
    return self._codigo == outro._codigo and self._saldo == outro._saldo
  
  def deposita(self, valor):
    self._saldo += valor
    
  def __str__(self):
    return "[>>Codigo {} Saldo {}<<]".format(self._codigo, self._saldo)

conta1 = ContaSalario(37)
conta2 = ContaSalario(37)
conta1 == conta2

conta1.deposita(10)

conta1 == conta2