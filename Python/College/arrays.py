import numpy as np

# arr = np.array([1, 2, 3, 4, 5], dtype='S') # dtype tells the type but also assigns the type if you put this argument here
arr = np.array([1, 2, 3, 4, 5])
print(arr)
print(arr[0])

print(type(5)) # just to test something 
print(arr.dtype)

x=arr.copy() # make a copy of the arr array into x
x[0]=42 # what is changed here doesnt affect the original array
print(arr)
print(x)

y=arr.view() # also copies the array but this time the changes affect the original array
y[0]=43
print(arr)
print(y)

# for "iterando" displays the value
for m in arr:
    print(m)
# enumerate(array) enumerates and displays the value
for indice, value in enumerate(arr):
    print(indice, value)