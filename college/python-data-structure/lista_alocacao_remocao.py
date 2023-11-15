def removeL(k,L,n):
    i=0                 #inicio da busca do nó
    posRemocao=-1
    while i<n:
        if L[i] == k:
            posRemocao=i #chave encontrada
            i=n+1        #sair do laço
        else:
            i=i+1        #continuar busca
            #if L[i]>k: caso a lista fosse ordenada
            #  return -1
            #i=i+1
    if i==n:
        return -1        #erro, chave não existe
    i=posRemocao         #final da busca do nó
    while (i<n-1):       #inicio do ajuste da lista
        L[i]=L[i+1]      #puxa cada nó posterior 1 posicao 
        i=i+1
    L.pop(n-1)           #ajusta o tamanho da lista
    return posRemocao    #saída normal da função

nomes = ['Joao','Maria','Ana','Arthur', 'Joelma']
nomes.remove('Arthur')
print(nomes)
nomes.pop(2)
print(nomes)
removeL('Joelma', nomes, len(nomes))
print(nomes)