#include <stdio.h>

void ft_fattoriale (int numero1 ) {
    printf ("inseisci il fattoriale %d \n" , numero1);
    int res= 1;

    if (numero1<0) {
        printf("Errore %d\n", numero1);
    }

    while (numero1>1){
        res*=numero1;
        numero1--;
    }
    printf("%d\n",res);
}
int main() {
    int numero1;
    scanf("%d", &numero1);
  
    ft_fattoriale(numero1);
    return (0);
}