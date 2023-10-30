# program.py
# sum = 1+2
# print(sum)
planets_in_solar_system = 8 # int, pluto used to be the 9th planet, but is too small
distance_to_alpha_centauri = 4.367 # float, lightyears
can_liftoff = True
shuttle_landed_on_the_moon = "Apollo 11" #string

print(type(distance_to_alpha_centauri))
left_side = 10
right_side = 5
print(left_side / right_side)

# trabalhar com datas pode ser útil com backups, condições e métricas
from datetime import date
print(date.today())
print(date.today().day)
print(date.today().month)
print(date.today().year) # cool!
print("Today's date is: ", date.today()) # usar + aqui não dá pq são dois tipos de dados diferentes
print("Today's date is: " + str(date.today())) # essa opção tem menos espaço entre os caracteres

# programa de backup no dia selecionado, ex: python backup.py 2023-01-01
# Usando o módulo sys, você pode recuperar os argumentos de linha de comando e usá-los no programa
# import sys
# print(sys.argv) # uma matriz
# print(sys.argv[0]) # program name
# print(sys.argv[1]) # first arg
# se isso tivesse no arquivo de backup ele mostraria o arg 1 e o 2 python backup.py 2023-01-01

print("Welcome to the greeter program")
name = input("Enter your name: ") # input armazena em char
print("Greetings " + name) 

print("calculator program")
first_number = input("first number: ")
second_number = input("second number: ")
print(first_number + second_number)
print(int(first_number) + int(second_number))

