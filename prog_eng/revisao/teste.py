def dotocomma(n):
    res = str(n).split(".")[0] + "," + str(n).split(".")[1]
    return res

produtos = [
    {"cebolinha":2.5},
    {"agrião":3.0},
    {"tangerina":4.0}
]

carrinho = []

while True:
    print("{:=^40}".format("Mercado do José"))
    print("Itens:")
    print("-"*40)

    for i in range(len(produtos)):
        for k,v in produtos[i].items():
            print((i+1), "-" + k + " = " + dotocomma(v))


    print("="*40)
    print("\n\n")

    r = int(input("Digite o produto desejado:"))
    carrinho.append(produtos[r-1]) 
    
    b = input("\n\n Continuar Comprando? S/N: ")

    if b.upper() == "S":
        continue
    elif b.upper() == "N": 
        break        

print("{:=^40}".format("Mercado do José"))
print("Carrinho:")
print("-"*40)
f = open("nf.txt","w")


for i in range(len(carrinho)):
    for k,v in carrinho[i].items():
        print((i+1), "-" + k + " = " + dotocomma(v))
        f.write(str(i+1) + "-" + k + " = " + dotocomma(v) + "\n")
print("="*40)

f.close()
f = open("nf.txt","r")
read = f.read()

print(read)

f.close()


