#include <stdio.h>

int main ()
{
    int numero1;
    printf ("inserisci un numero:\n");
    scanf("%d", &numero1);
    printf("il numero inserito è : %d\n", numero1);
    



    int numero2;
    printf ("inserisci un numero:\n");
    scanf("%d", &numero2);
    printf("il numero inserito è : %d\n", numero2);

    int c;
    c=numero1%numero2;
    printf("modulo=%d\n",c);
    return 0;
}
