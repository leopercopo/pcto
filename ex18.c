#include <stdio.h>

int main () {
    float quantita;
    float prezzoUnitario=5.0;
    float sconto=0.0;
    float costoTotale;
    float prezzoscontato;
    printf ("inserisci il numero di pezzi ordinati");
    scanf("%f", &quantita);

   while (quantita >0){
  
   costoTotale=prezzoUnitario*quantita;
    if (quantita>30 && quantita<50)
    {
        sconto= costoTotale/100 *10;
        prezzoscontato= costoTotale-sconto;
       printf ("il costo totale è %f \n" , prezzoscontato);

    }
     else if (quantita>50)
    {
        sconto= costoTotale/100 *15;
        prezzoscontato= costoTotale-sconto;
           printf ("il costo totale è %f \n" , prezzoscontato);
    }
  else {
    printf ("il costo totale è %f \n" , costoTotale);

  }

  printf ("inserisci il numero di pezzi ordinati");
    scanf("%f", &quantita);
   }
    

  
    

    

return 0;
}