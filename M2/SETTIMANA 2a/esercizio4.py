import math
  
# Funzione per il calcolo del perimetro del quadrato
def perimetro_quadrato(lato):
    return lato * 4
  
# Funzione per il calcolo del perimetro del cerchio
def perimetro_cerchio(raggio):
    return 2 * math.pi * raggio
  
# Funzione per il calcolo del perimetro del rettangolo
def perimetro_rettangolo(base, altezza):
    return base * 2 + altezza * 2
  
# Scelta della figura geometrica
figura = input("Di quale figura geometrica vuoi calcolare il perimetro? (quadrato, cerchio, rettangolo) ")
  
# Controllo dell'input dell'utente
if figura != "quadrato" and figura != "cerchio" and figura != "rettangolo":
    print("Inserimento non valido.")
else:
    if figura == "quadrato":
        # Inserimento dei dati da parte dell'utente
        lato = float(input("Inserisci il valore del lato del quadrato: "))
        # Calcolo del perimetro
        perimetro = perimetro_quadrato(lato)
        # Visualizzazione del risultato
        print("Il perimetro del quadrato è:", perimetro)
    elif figura == "cerchio":
        # Inserimento dei dati da parte dell'utente
        raggio = float(input("Inserisci il valore del raggio del cerchio: "))
        # Calcolo del perimetro
        perimetro = perimetro_cerchio(raggio)
        # Visualizzazione del risultato
        print("Il perimetro del cerchio è:", perimetro)
    else:
        # Inserimento dei dati da parte dell'utente
        base = float(input("Inserisci il valore della base del rettangolo: "))
        altezza = float(input("Inserisci il valore dell'altezza del rettangolo: "))
        # Calcolo del perimetro
        perimetro = perimetro_rettangolo(base, altezza)
        # Visualizzazione del risultato
        print("Il perimetro del rettangolo è:", perimetro)