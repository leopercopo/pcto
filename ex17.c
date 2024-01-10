#include <stdio.h>

int main() {
    int numero;
    int somma = 0;
    int conteggio = 0;

    printf("Inserisci un numero intero positivo (inserisci un numero negativo per terminare): ");
    scanf("%d", &numero);

    while (numero >= 0) {
        somma += numero;
        conteggio += 1;
        float media = (float)somma / conteggio;  
        printf("Media attuale: %.2f\n", media);

        printf("Inserisci un numero intero positivo (inserisci un numero negativo per terminare): ");
        scanf("%d", &numero);
    }

    printf("Programma terminato.\n");

    return 0;
}