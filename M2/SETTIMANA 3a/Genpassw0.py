# Password generator

# imports
import string
import random

# declaring variables
password_length = 0
password = ''

# starting executing
print('\n\n*** GENERATORE DI PASSWORD CASUALI *** \n')
password_length = input('Scegli la lunghezza della password: ')
for i in range(int(password_length)):
    if (random.randint(1, 10) % 2 == 0): 
        password = password + random.choice(string.ascii_letters)
    else:
        password = password + random.choice(string.digits)
    
print('\nla tua password generata è: ' + password + '\n\n\n')

