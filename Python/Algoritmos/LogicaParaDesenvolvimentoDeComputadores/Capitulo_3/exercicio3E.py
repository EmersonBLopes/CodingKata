"""
calcular a prestacao de um bem em atraso utilizando a seguinte fomula PRESTACAO = VALOR + (VALOR*(TAXA/100)*TEMPO)
"""

valor = float(input("Digite o valor:"))
taxa = float(input("Digite a taxa:"))
tempo = float(input("Digite o tempo de atraso:"))

prestacao = valor + (valor*(taxa/100)*tempo)

print(f"A prestacao eh: R$ {prestacao}")
