#   arrays are lists
nomes = ["Ana", "Maria", "Braga"]
#   to call 1 nomes out the list nomes[indice]
print(len(nomes))

for m,i in enumerate(nomes):
    print(m,i)
    
for x in nomes:
    print(x)

nomes.append("Nozinho") #   to add something to the list
print(nomes)

nomes.remove("Maria") #  to remove something out of the list
print(nomes)

nomes.pop(0) #  to remove something out of the list by the indice
print(nomes)
