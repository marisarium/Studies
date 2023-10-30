amigos = [["João",25,"Câncer"], ["Maria",23,"Áries"],["Ana",31,"Aquário"]]
print(amigos) # matrix from lists

amigos.append(["Thiago",30,'Capricórnio']) # literally append, put something in the list
print(amigos)

amigos[2].append("Juazeiro") # put something at a certain place in this case, at the third list inside the list
print(amigos)

amigos.remove(['João',25,'Câncer']) # literally remove it from the list of lists (matrix)
print(amigos)

amigos[1].remove(31) # remove it from a certain location
print(amigos)

amigos.pop(2) # remove a list inside the list using index
amigos[0].pop(1) # remove a specific item from one of the lists inside the list
print(amigos)

for x in amigos: # run and print all the lists inside the list
    print(x)

for x in amigos:
    for y in x: # run and print all the items inside the lists
        print(y)

amigos.append(['Mario']) # append a list of different size to the end of the matrix

for x in amigos: # shows how mario got weird
    for y in amigos:
        print(y)

for x in amigos: # fixed mario with the isinstance()
    if isinstance(x,list):
        for y in amigos:
            print(y)
    else:
        print(x)
