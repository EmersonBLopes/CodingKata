"""
Efeturar o calcula da quantidade de litros gastos em uma viagem, utilizando um automovel que faz 12 quilometros por litro.
O programa deve apresentar a velocidade media, tempo gasto, distancia percorrida e quantidade de litros gastos
"""

tempo = float(input("Digite a quantidade de tempo gasto na viagem:"))
velocidadeMedia = float(input("Digite a velocidade media durante a viagem:"))

distancia = tempo * velocidadeMedia;
combustivelGasto = distancia / 12;

print(f"Velocidade media: {velocidadeMedia}")
print(f"Tempo gasto:{tempo}")
print(f"Distancia percorrida: {distancia}km")
print(f"litros gastos:{combustivelGasto}")
