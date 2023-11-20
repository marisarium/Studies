def computepay(hours, rate):
    if hours>40:
        pay = (hours-40)*1.5*rate + 40*rate
    else:
        pay = hours*rate
    return pay
try:
    hours = int(input('Enter Hours: '))
    rate = int(input('Enter Rate: '))    
    print('Pay: ', computepay(hours, rate))
except:
    print("Error, please enter numeric input")