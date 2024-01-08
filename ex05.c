#include <stdio.h>

int main ()
{
    float numero1;
    printf ("inserisci un numero:\n");
    scanf("%f", &numero1);
    printf("il numero inserito è : %f\n", numero1);
    



    float numero2;
    printf ("inserisci un numero:\n");
    scanf("%f", &numero2);
    printf("il numero inserito è : %f\n", numero2);

    float c;
    c=numero1/numero2;
    printf("divisione=%f\n",c);
    return 0;
}
