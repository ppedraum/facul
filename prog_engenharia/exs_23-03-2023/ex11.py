from calendar import isleap as il

data = int(input("Digite um ano: "))
if il(data):
    print(f"O ano {data} é bissexto!")
else:
    print(f"O ano {data} não é bissexto!")
