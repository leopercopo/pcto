#include <stdio.h>

int main ()
{
    int numero;
    printf ("INSERISCI UN NUMERO:\n");
    scanf("%d", &numero);

    int b= numero%2;
   
    if (b==0){
    printf("NUMERO PARI\n");
}
else {
printf ("NUMERO DISPARI\n");
}
return 0;
}