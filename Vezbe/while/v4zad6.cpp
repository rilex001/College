#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    double x, stepen, fakt, suma, clan;
    double znak;
    int i, k;
    const double eps=1e-7;
    scanf("%lf", &x);

    printf("Suma racunata postupno: ");
    suma = 0.0;
    i = 0;
    while (true) {
        // clan je (-1)^i * x^(2*i+1)/(2*i+1)!

        // racunamo x^(2*i+1) pomocu while
        stepen = 1; // stepen = x^(2*i+1), mozemo kao pow(x, 2*i+1)
        k = 1;
        while (k <= 2*i) {
            stepen *= x;
            k++;
        }
        // racunamo (2*i+1)! pomocu while
        fakt = 1;
        k = 1;
        while (k <= 2*i) {
            fakt *= k;
            k++;
        }
        clan = stepen/fakt;
        if (fabs(clan) <= eps) break;
        // (-1)^i je 1 ako je i paran, odnosno -1 ako je i neparan
        if (i%2 == 1) clan = -clan;

        suma += clan;
        i++;
    }
    printf("%.9lf\n", suma);


    printf("cos(%.7lf) = %.9lf\n", x, sin(x));

    return 0;
}
