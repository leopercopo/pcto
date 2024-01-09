#include <stdio.h>

int main ()
{
    int numero1;
    printf ("inserisci un numero di volte per cui vuoi ripetere ciao:\n");
    scanf("%d", &numero1);
    printf("il numero inserito è : %d\n", numero1);
int CIAO;
CIAO=0;

    while ( CIAO<numero1 ){
        printf("CIAO\n");
        CIAO++;
    }
    return 0;
}