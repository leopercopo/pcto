#include <stdio.h>
#include <math.h>

void calcolaRadici(double a, double b, double c) {
    double delta = b * b - 4 * a * c;

    if (delta > 0) {
        
        double radice_delta = sqrt(delta);
        double x1 = (-b + radice_delta) / (2 * a);
        double x2 = (-b - radice_delta) / (2 * a);

        printf("Le radici dell'equazione sono:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } else if (delta == 0) {
        
        double x = -b / (2 * a);
        printf("L'equazione ha una radice doppia:\n");
        printf("x = %.2f\n", x);
    } else {
       
        printf("L'equazione non ha soluzioni reali.\n");
    }
}

int main() {
    double a, b, c;

   
    printf("Inserisci il coefficiente a: ");
    scanf("%lf", &a);
    printf("Inserisci il coefficiente b: ");
    scanf("%lf", &b);
    printf("Inserisci il coefficiente c: ");
    scanf("%lf", &c);

    
    calcolaRadici(a, b, c);

    return 0;
}