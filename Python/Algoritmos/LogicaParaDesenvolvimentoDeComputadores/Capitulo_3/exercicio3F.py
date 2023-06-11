"""
Efetuar a leitura das variaveis A e B e realizar a troca dos valores
"""

def trocaValores(a,b):
    x = a
    a = b
    b = x
    print(f"O valor de A eh:{a}")
    print(f"O valor de B eh:{b}")

a = int(input("Digite o valor de a:"))
b = int(input("Digite o valor de b:"))

trocaValores(a,b)

