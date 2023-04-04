def lunghezza_parole(lista_parole):
    # inizializziamo la lista b vuota
    lista_lunghezze = []
    # per ogni parola nella lista a
    for parola in lista_parole:
    # aggiungiamo alla lista b la lunghezza della parola
        lista_lunghezze.append(len(parola))
    # restituiamo la lista b
    return lista_lunghezze

# chiediamo all'utente di inserire le parole
lista_parole = input("Inserisci le parole separate da uno spazio: ").split()

# calcoliamo la lista delle lunghezze delle parole
lista_lunghezze = lunghezza_parole(lista_parole)

# stampiamo la lista delle lunghezze delle parole
print("la conta caratteri nelle parole è la seguente", lista_lunghezze)

while True:
        lista_parole = input("Inserisci le parole separate da uno spazio: ").split()
        lista_lunghezze = lunghezza_parole(lista_parole)
        print("la conta caratteri nelle parole è la seguente", lista_lunghezze)

        scelta = input("Vuoi inserire altre parole? (s/n)").lower()
        if scelta == "n" : 
            break