import math
"""
 Calcular e apresentar o volume de uma lata de oleo.
 O usuario deve inserir a altura e o raio da lata
"""

altura = float(input("Digite a altura da lata de oleo:"))
raio = float(input("Digite o raio da lata de oleo:"))

volume = math.pi * math.pow(raio,2) * altura 

print(f"O volume da lata de oleo eh: {volume}");
