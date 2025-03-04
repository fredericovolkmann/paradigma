def contagem(n):
  if n < 0:
    print("Entrada inválida. Digite um número não negativo.")
    return
  if n > 0:
    print(n)
    contagem(n-1)
  else:
    print("BOOM !")

entrada = int(input("digite um numero: "))
contagem(entrada)
