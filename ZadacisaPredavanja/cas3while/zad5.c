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
        while (k <= 2*i+1) {
            stepen *= x;
            k++;
        }
        // racunamo (2*i+1)! pomocu while
        fakt = 1;
        k = 1;
        while (k <= 2*i+1) {
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

    /*
        iz trenutne vrednosti clana izracunamo vrednost narednog
        clan = znak * stepen / fakt
        1*x/x   -1*x^3/3!    1*x^5/5!
        naredni clan je:
        (-1)*znak * (stepen*x*x)  / (fakt*(2i)*(2i+1)
        i=0 1         *   x     /     1
        i=1 (-1)*1    * x*x*x     /     (1*2*3)
        i=2 (-1)*(-1) * (x^3*x*x) / (6*4*5)
    */
    printf("Suma racunata efikasno: ");
    i = 0;
    znak = 1;
    stepen = x;
    fakt = 1;
    suma = 0.0;
    while (true) {
        clan = znak*stepen/fakt;
        if (fabs(clan) <= eps) break;
        suma += clan;

        i++;
        znak = -znak;
        stepen *= x*x;
        fakt *= (2*i)*(2*i+1);
    }
    printf("%.9lf\n", suma);

    printf("sin(%.7lf) = %.9lf\n", x, sin(x));

    return 0;
}
