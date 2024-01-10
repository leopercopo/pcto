#include <stdio.h>

int main() {
    char carattere;

    printf("Inserisci una lettera: ");
    scanf(" %c", &carattere);  
    
    if ((carattere >= 'a' && carattere <= 'z') || (carattere >= 'A' && carattere <= 'Z')) {
        
        if (carattere == 'a' || carattere == 'e' || carattere == 'i' || carattere == 'o' || carattere == 'u' ||
            carattere == 'A' || carattere == 'E' || carattere == 'I' || carattere == 'O' || carattere == 'U') {
            printf("%c e una vocale.\n", carattere);
        } else {
            printf("%c e una consonante.\n", carattere);
        }
    } else {
        printf("Il carattere inserito non e una lettera dell'alfabeto.\n");
    }

    return 0;
}