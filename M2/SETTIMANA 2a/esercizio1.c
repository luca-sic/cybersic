#include <stdio.h>

void print_menu();
int inizio_gioco();

int main() {

    char scelta = '\0'; 
    print_menu();

    scanf(" %c", &scelta);

    if (scelta == 'B') {
        printf("Gioco terminato, arrivederci, Grazie!! \n");
        return 0;
    }

    while (scelta == 'A') {
        inizio_gioco();
        print_menu();
        scanf(" %c", &scelta); 
    }

    return 0;
}

void print_menu() {
    printf("menù di avvio:\n");
    printf("Premi A a  per iniziare un nuovo gioco \n Premi B b per uscire dal gioco!!\n");
    printf("inserisci la lettera indicata *_* :\n");
}

int inizio_gioco() {
    int punteggio = 0;
    char nome[20] = {'\0'};
    char risposta1, risposta2, risposta3;
    printf("inserisci il nome del giocatore: \n");
    scanf("%s", nome); 

    printf("Domanda1:\n");
    printf("Qual'è il giocatore che ha vinto piu palloni d'oro? \n");
    printf("A CR7 \n B Messi \n C Benzema \n");
    scanf(" %c", &risposta1);


if (risposta1 == 'B') 
	{
      punteggio++;
	}

    printf("Domanda2:\n");
    printf("Chi ha vinto il mondiale 2022? \n");
    printf("A Argentina \n B Italia \n C Francia \n");
    scanf(" %c", &risposta2);


if (risposta2 == 'A') 
	{
	punteggio++;
	}


    printf("Domanda3:\n");
    printf("Quanti mondiali ha vinto l'Italia \n");
    printf("A 3 \n B 1 \n C 4 \n");
    scanf(" %c", &risposta3);

if (risposta3 == 'C')
	{
	punteggio++;
	}

    printf("Partita conclusa, punteggio totalizzato da %s:%d\n", nome, punteggio);

    return 0;
}
