maximum = None
minimum = None
count = 0
numbers = []
while True:
    numbers.append(input("Enter a number: "))
    if numbers[count] == 'done':
        for number in numbers:
            if maximum is None or number>maximum and number.isnumeric():
                maximum = number
            if minimum is None or number<minimum and number.isnumeric():
                minimum = number
        print('the maximum number is ', maximum)
        print('the minimum number is ', minimum)
        break
    elif numbers[count].isnumeric():
        count = count + 1
    else:
        print("Invalid input")
