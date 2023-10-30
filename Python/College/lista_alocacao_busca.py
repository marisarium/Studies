def buscaLista(k, L, n):
    i=0
    indiceL=-1
    while i<n:
        if L[i]==k:   #nó encontrado
            indiceL=i #salva o indice
            i=n+1     #sair do laço
        i=i+1         #segue a procura
    return indiceL

def buscaOrdenada(k, L, n): #em ordem crescente
    i=0
    indiceL=-1
    while (i<n):
        if L[i]>=k: #caso a chave seja maior do que a chave buscada, acabar
            if L[i]==k:
                indiceL=i
                i=n+1
            else:
                i=n+1
        else:
            i=i+1
    return indiceL

nomes = ['Joao','Maria','Ana']
numeros = [1,2,3,4,5,6,7,8,9,10]
i=nomes.index('Joao') #busca o indice do nó com a chave Joao
print(i)
print(buscaLista('Joao', nomes, len(nomes)))
print(buscaOrdenada(5, numeros,len(numeros)))
print(buscaOrdenada(3, numeros, len(numeros)))