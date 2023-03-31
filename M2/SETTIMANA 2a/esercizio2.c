#include <stdio.h>
#include <ctype.h> // libreria necessaria per usare la funzione tolower()

void print_menu();
int inizio_gioco();

int main() {

    char scelta[10];
    print_menu();

    fgets(scelta, 10, stdin);

    while (tolower(scelta[0]) != 'b') {
        if (tolower(scelta[0]) == 'a') {
            inizio_gioco();
        } else {
            printf("Input non valido, premere A per iniziare un nuovo gioco o B per uscire.\n");
        }
        print_menu();
        fgets(scelta, 10, stdin);
    }

    printf("Gioco terminato, arrivederci, Grazie!! \n");
    return 0;
}

void print_menu() {
    printf("menù di avvio:\n");
    printf("Premi A per iniziare un nuovo gioco\nPremi B per uscire dal gioco!!\n");
    printf("Inserisci la lettera indicata *_* : ");
}

int inizio_gioco() {
    int punteggio = 0;
    char nome[20];
    char risposta1, risposta2, risposta3;

    printf("Inserisci il nome del giocatore: ");
    fgets(nome, 20, stdin);

    printf("Domanda 1:\n");
    printf("Qual é il giocatore che ha vinto più palloni d'oro? \n");
    printf("A) CR7 \nB) Messi \nC) Benzema \n");
    scanf(" %c", &risposta1);
    getchar(); // Purga il carattere '\n' dal buffer
  
    if (tolower(risposta1) == 'b') {
        punteggio++;
    } else {
        printf("Risposta errata.\n");
    }

    printf("Domanda 2:\n");
    printf("Chi ha vinto il mondiale 2022? \n");
    printf("A) Argentina \nB) Italia \nC) Francia \n");
    scanf(" %c", &risposta2);
    getchar(); // Purga il carattere '\n' dal buffer

    if (tolower(risposta2) == 'b') {
        punteggio++;
    } else {
        printf("Risposta errata.\n");
    }

    printf("Domanda 3:\n");
    printf("Quanti mondiali ha vinto l'Italia? \n");
    printf("A) 3 \nB) 1 \nC) 4 \n");
    scanf(" %c", &risposta3);
    getchar(); // Purga il carattere '\n' dal buffer

    if (tolower(risposta3) == 'c') {
        punteggio++;
    } else {
        printf("Risposta errata.\n");
    }

    printf("Partita conclusa, punteggio totalizzato da %s: %d\n", nome, punteggio);

    return 0;
}