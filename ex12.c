#include <stdio.h>


int main() {
    int a, b, c; 
    printf (" inserisci i valori dei tre lati di un triangolo") ;
       scanf("%d", &a);
       scanf("%d", &b);
       scanf("%d", &c);

    if (a == b)
    {
        if (a == c)
        {
            printf ("equilatero \n") ;
        } 
        else 
        {
            printf ("isoscele \n");
        }
    } 
    else 
    {
        if (a == c) 
        {
            printf ("isoscele \n");
        } 
        else 
        {
            if (b == c) 
            {
                printf ("isoscele \n");
            } 
            else 
            {
                printf ("scaleno \n");
            }
        }
    }
    return 0;
}