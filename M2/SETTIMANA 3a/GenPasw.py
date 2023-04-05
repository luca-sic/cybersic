#CREIAMO IL NOSTRO GENERATORE DI PASSWORD SICURE *-*!

#USEREMO: MODULO RANDOM :

import random

def password_generetor():
    convalida="s"
    while convalida=="s" or convalida=="S":
        generatore ()
        convalida= input ('''Per utilizzare il programma premi "s" o "S" oppure per uscire un altro tasto!:''')

    print ("Grazie per aver utilizzato il programma!:")




def generatore ():

    print ('''BENVENUTO/A AL TUO GENERATORE DI PASSWORD!:''')

    caratteri= '''+_;:.ì<<>>$£=abcdefghilmnopqrstuvzwkjx123456789ABCDEFGHILMNOPQRSTUVZKJWX!?-@\%&()*[]/'''

    lunghezza= int (input ('''Scegli ora la lunghezza della tua password!: '''))

    password = ""

    for x in range (lunghezza):
        password+= random.choice (caratteri)

    print ("Ecco la tua password!: ", password)




password_generetor()