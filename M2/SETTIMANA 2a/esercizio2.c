#include <stdio.h>
#include <ctype.h> // libreria necessaria per usare la funzione tolower()

void print_menu();
int inizio_gioco();

int main() {

    char scelta[10];
    print_menu();

    fgets(scelta, 10, stdin);

    if (tolower(scelta[0]) == 'b') {
        printf("Gioco terminato, arrivederci, Grazie!! \n");
        return 0;
    }
    else if (tolower(scelta[0]) != 'a') {
        printf("Input non valido, premere A per iniziare un nuovo gioco o B per uscire.\n");
        return 0;
    }

    while (tolower(scelta[0]) == 'a') {
        inizio_gioco();
        print_menu();
        fgets(scelta, 10, stdin);
    }

    return 0;
}

void print_menu() {
    printf("menù di avvio:\n");
    printf("Premi A per iniziare un nuovo gioco \n Premi B per uscire dal gioco!!\n");
    printf("inserisci la lettera indicata *_* :\n");
}

int inizio_gioco() {
    int punteggio = 0;
    char nome[20] = {'\0'};
    char risposta1, risposta2, risposta3;
    printf("inserisci il nome del giocatore: \n");
    fgets(nome, 20, stdin);

    printf("Domanda1:\n");
    printf("Qual'è il giocatore che ha vinto più palloni d'oro? \n");
    printf("A CR7 \n B Messi \n C Benzema \n");
    scanf(" %c", &risposta1);

    if (tolower(risposta1) == 'b')
    {
        punteggio++;
    }
    else
    {
        printf("Risposta errata.\n");
    }

    printf("Domanda2:\n");
    printf("Chi ha vinto il mondiale 2022? \n");
    printf("A Argentina \n B Italia \n C Francia \n");
    scanf(" %c", &risposta2);

    if (tolower(risposta2) == 'a')
    {
        punteggio++;
    }
    else
    {
        printf("Risposta errata.\n");
    }

    printf("Domanda3:\n");
    printf("Quanti mondiali ha vinto l'Italia \n");
    printf("A 3 \n B 1 \n C 4 \n");
    scanf(" %c", &risposta3);

    if (tolower(risposta3) == 'c')
    {
        punteggio++;
    }
    else
    {
        printf("Risposta errata.\n");
    }

    printf("Partita conclusa, punteggio totalizzato da %s:%d\n", nome, punteggio);

    return 0;
}
