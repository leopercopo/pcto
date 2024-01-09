#include <stdio.h>


int main()
{
    float celsius;
    printf("inserisci la temperatura in gradi Celsius\n ");
    scanf("%f", &celsius);

    float fahrenheit=(9/5)*celsius + 32;

    float kelvin=celsius+273.15;
   
    if(celsius<-273.15)
    {
        printf ("Errore \n");
    }
    else 
    {
        
        printf ("la temperatura in fahrenheit e' di %f\n ", fahrenheit);
        printf ("la temperatura in kelvin e' di %f\n", kelvin);
    }

    return 0;
}
    