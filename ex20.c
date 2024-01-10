#include <stdio.h>

void ft_iterative_power(int nb, int power)
{
    
    int res;
    res=nb;
    if(power<0){
        printf("%d",0);
    }
    if(power==0) {
       printf("%d",1);
    }
    while(power-->1){
        res*=nb;
    }
    printf("%d\n",res);
}
int main() {
    int nb;
    scanf("%d", &nb);
    int pow;
    scanf("%d", &pow);
    
    ft_iterative_power(nb, pow);
    return (0);
}