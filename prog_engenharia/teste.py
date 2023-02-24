lista = ["maca","banana","batata","pera"]
lista2 = ["maca","banana","batata"]

listacont = len(lista) if len(lista) > len(lista2) else len(lista2)
listamenos = len(lista) if len(lista) < len(lista2) else len(lista2)

for i in range(listacont):

    if i == listamenos:
        break
    
    if(lista[i] == lista2[i]):
        print(f"{lista[i]} é igual a {lista2[i]}")