count = 0
total = 0
average_number = 0
while True:
    
    numbers = input("Enter a number: ")

    if numbers == 'done' and count!=0:
        average_number = total/count
        print(total, ' ', count, ' ', average_number)
        break
    elif numbers.isnumeric():
        count = count + 1
        total = total + int(numbers)
    else:
        print("Invalid input")