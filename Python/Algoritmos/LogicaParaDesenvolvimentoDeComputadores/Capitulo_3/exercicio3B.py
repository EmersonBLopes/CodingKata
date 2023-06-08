"""
Ler uma temperatura em graus Fahrenheit e apresenta-la convertida em graus Celsius
"""

#leitura de valores
fahrenheit = int(input("Digite a teperatura em graus fahrenheit:"))

#processameto
celsius = ((fahrenheit - 32) * 5)/9

print(f'{celsius} C')


