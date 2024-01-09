#include <stdio.h>

int main() {

    int numero1;
    printf ("inserisci il primo numero\n");
    scanf("%d", &numero1);
    
    int numero2;
    printf ("inserisci il secondo numero\n");
     scanf("%d", &numero2);
    
    if(numero1%numero2)
    {
       printf ("il primo è multiplo del secondo\n");
    }
    else
    {
        printf ("il primo non è multiplo del secondo\n");
    }

    return 0;
}