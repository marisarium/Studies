
try:
    hours = int(input('Enter Hours: '))
    rate = int(input('Enter Rate: '))
    if hours>40:
        pay = (hours-40)*1.5*rate + 40*rate
    else:
        pay = hours*rate
    print('Pay: ', pay)
except:
    print("Error, please enter numeric input")