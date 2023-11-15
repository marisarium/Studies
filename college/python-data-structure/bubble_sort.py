import numpy as np

arr  = np.array([10,5,20,1,4])
print("Array desorganizado: ", arr)

alterado = True
while(alterado==True):
    alterado = False
    for x in range(len(arr)):
        for y in range(len(arr)-x-1):
            if (x!=len(arr) and arr[x]>arr[x+1]):
                a = arr[x+1]
                arr[x+1] = arr[x]
                arr[x] = a
                alterado = True
print("Array organizado: ", arr)