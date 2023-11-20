import string

def is_pangram(s):
    alphabet = "".join(list(string.ascii_lowercase)) # take all alphabet letters
    slist = []
    length_comparison = 0
    for x in s: # takes only the alphabet from the sentence
        if x.isalpha():
            slist.append(x)
    slowercase = "".join(slist).lower()
    for y in alphabet: # check if all of the alphabet is inside the sentence
        if y in slowercase:
            length_comparison = length_comparison + 1
        else:
            return False
    if length_comparison == len(alphabet):
        return True
    
a = "The quick brown fox jumps over the lazy dog"
b = "The quick, brown fox jumps over the lazy dog!"
c = "1bcdefghijklmnopqrstuvwxyz"
d = "ABCD45EFGH,IJK,LMNOPQR56STUVW3XYZ"
e = "This isn't a pangram!"
f = 'abcdefghijklm opqrstuvwxyz'
g = 'Aacdefghijklmnopqrstuvwxyz'
print(is_pangram(a))
print(is_pangram(b))
print(is_pangram(c))
print(is_pangram(d))
print(is_pangram(e))
print(is_pangram(f))
print(is_pangram(g))