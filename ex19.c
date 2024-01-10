#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    
    int res;
    res=nb;
    if(power<0){
        return 0;
    }
    if(power==0) {
        return 1;
    }
    while(power-->1){
        res*=nb;
    }
    return res;
}
int main() {
    int nb;
    scanf("%d", &nb);
    int pow;
    scanf("%d", &pow);
    
    printf("%d\n", ft_iterative_power(nb, pow));
    return 0;
}