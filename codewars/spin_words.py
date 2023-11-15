def spin_words(sentence): #a function to spin words of 5 or more letters
    words = sentence.split() #split the words in the sentence to different list items
    for position,word in enumerate(words): #enumerate them to find the position of a word with 5 or more letters
        if(len(word)>=5):
            words.pop(position) #remove the word from its position 
            words.insert(position, word[::-1]) #add the inverted word into this position
    return print(' '.join(words)) #added print just for testing, joined the list into a string
A = "Hey fellow warriors"
B = "This is a test"
C = "This is another test"
D = "Welcome"
E = "to"
F = "CodeWars"
G = "Hey fellow warriors"
H = "This sentence is a sentence"
spin_words(A)
spin_words(B)
spin_words(C)
spin_words(D)
spin_words(E)
spin_words(F)
spin_words(G)
spin_words(H)


