def reverse_words(text):
    words = text.split() #separate the text into words
    spaces = '' #variable for the number of spaces to add between characters
    stopped_for_space = 0 #checks if the loop stopped for spaces
    
    for position, word in enumerate(words): #runs through the words
        words[position] = word[::-1] #reverse the words
    
    for x in text: #puts the words back together with their right amount of spaces
        if x == ' ':
            spaces = spaces + ' ' #adds spaces
            stopped_for_space = 1 #if 1 means there is spaces and is not a char from the alphabet
        if stopped_for_space == 1 and x.isalpha() == True:  
            break # get out of the loop
    
    return spaces.join(words) #join words with their spaces into texts again

a = "This is an example!"
b = "double  spaces"
print(reverse_words(a))
print(reverse_words(b))