#convert string to camel case
def to_camel_case(text):
    # taking out the dash/underscore
    words_without_underscore = text.split("_")
    words_without_underscore2 = " ".join(words_without_underscore)
    words_without_dash = words_without_underscore2.split("-")
    words = " ".join(words_without_dash)
    words_list = words.split()

    # camel casing the second first word capitalized unless the first is also capitalized then all firsts are capitalized
    for index,item in enumerate(words_list):
        if index>0:
            words_list.pop(index)
            words_list.insert(index, item.capitalize())
    return "".join(words_list)

a = "the-stealth-warrior" #"theStealthWarrior"
b = "The_Stealth_Warrior" #"TheStealthWarrior"
c = "The_Stealth-Warrior" #"TheStealthWarrior"
print(to_camel_case(a))
print(to_camel_case(b))
print(to_camel_case(c))