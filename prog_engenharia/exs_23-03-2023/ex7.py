def calcmulta(v,l):
    if v - l <= 10:
        return [85.13,"Leve",3]
    elif v - l > 10 and v - l <= 30:
        return [127.69,"Média",5]
    elif v - l > 30:
        return [574.62,"Grave",7]

print(f"{'EX. 7':=^50}")

l = int(input("Limite Máx. Da Avenida:"))
v = int(input("Vel. do Veículo:"))
r = calcmulta(v,l)

print("=" * 55)
print(f"{'Resultado:':^57} \n\n")
print(f"A violação foi {r[1]}, com uma multa de {r[0]} e levando {r[2]} pontos na carteira.\n\n\n")
