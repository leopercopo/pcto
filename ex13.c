#include <stdio.h>

int main() {
int n, div=1, conta=0;
		
	do {
		printf ("inserisci un numero: ");
                scanf ("char");		
	} while (n<1);
    
	while(conta<=1 && div<=n/2); 
    scanf ("char" ); 
scanf ("char");
 {
		if(n%div==0)  
{
 //se trova divisori incrementa il contatore dei divisori
			conta++;
                }	
		div++;
	}
	
	if (conta==1)
{
	   printf ("Il numero e' primo\n ");
	} else
 {
	   printf ("Il numero non e' primo\n ");
	
}
	return 0;	
}