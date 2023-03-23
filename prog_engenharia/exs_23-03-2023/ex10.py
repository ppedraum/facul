import math as m

raio = float(input("Digite o Valor do Raio (cm): "))

area = round(m.pi * (raio ** 2),2)
area_f = str(area).split(".")[0] + "," + str(area).split(".")[1]

print(f"A área do círculo é {area_f}cm!")
