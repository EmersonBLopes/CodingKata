"""
Elabor um programa que calcule o volume de uma caixa retangular
"""

def calculaVolume(comprimento,largura,altura):
    return comprimento * largura * altura

comprimento = float(input("Digite o comprimento da caixa:"))
largura = float(input("Digite a largura da caixa:"))
altura = float(input("Digite a altura da caixa:"))

volume = calculaVolume(comprimento,largura,altura)

print(f"O volume da caixa eh: {volume}")
