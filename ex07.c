#include <stdio.h>

int main ()
{
    int età;
    printf ("INSERISCI LA TUA ETA:\n");
    scanf("%d", &età);
   
    if (età>=18)
    printf("SEI MAGGIORENNE\n");

else if (età<18)
printf ("SEI MINORENNE");

return 0;
}