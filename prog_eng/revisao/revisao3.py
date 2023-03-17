capacidade = 20
comb_pco = 4.95
dinheiro = 0

def dotocomma(n):
    res = str(n).split(".")[0] + "," + str(n).split(".")[1]
    return res

dinheiro = float(input("Quanto de Dinheiro vc quer colocar? R$"))

qtdgas = dinheiro / comb_pco
distmax = 20 * qtdgas

print("-"*30)
print(f"     Pço. Combustível: R${dotocomma(comb_pco)}")
print(f"Quant. de Combustível: {dotocomma(round(qtdgas,2))}L")
print(f"            Dist. Max: {dotocomma(round(distmax,2))}km")
print("-"*30)



