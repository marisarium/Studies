# fatorial de n

def fatorial(n):
    if(n>1):
        return n*fatorial(n-1)
    else:
        return n
    
def fatorial_uma_linha(n):
    return (n*fatorial_uma_linha(n-1)) if n > 1 else 1

x = 5
print(fatorial(x))
print(fatorial_uma_linha(x))
