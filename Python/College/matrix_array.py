import numpy as np

matriz1 = np.array([[1,2],[3,4],[5,6]]) # matrix are homogenous - same data type
matriz2 = np.array([[1,2],[3],[5,6]], dtype=object) # matrix must be the same size in arrays otherwise they are considered lists, using dif sizes is deprecated, put dtype=object to avoid error message
print(matriz1)
print(matriz2)
#   --------------------
matriz3 = np.array([[7,8],[9,10],[11,12]])
matriz3 = matriz1 + matriz3 #   matrix = (a0,0 + b0,0) + (a0,1 + b0,1)... = [ab0, ab1]
print(matriz3)
matriz3 = matriz3 - matriz1 #   matrix = (a0,0 - b0,0) + (a0,1 - b0,1)... = [ab0, ab1]
print(matriz3) # sums lines x columns of the matrix
# ----------------------
# matrix functions min, max, sum, mean, std
minimo = matriz1.min()
maximo = matriz1.max()
soma = matriz1.sum()
media = matriz1.mean()
desvio = matriz1.std()
print("Minimo = ", minimo)
print("Maximo = ", maximo)
print("Soma = ", soma)
print("Media = ", media)
print("Desvio = ", desvio)

for x,m in enumerate(matriz1):
    print(x,m)

