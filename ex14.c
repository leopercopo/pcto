#include <stdio.h>

int main ()
{
    int numero1;
    printf ("inserisci un numero di volte per cui vuoi ripetere ciao:\n");
    scanf("%d", &numero1);
    printf("il numero inserito è : %d\n", numero1);


    for (int CIAO=0; CIAO<numero1; CIAO++){
        printf("CIAO\n");
        
    }
    return 0;
}