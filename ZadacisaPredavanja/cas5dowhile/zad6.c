#include <stdio.h>
#include <math.h>

/*
cos(x) ~ 1 - x^2/2! + x^4/4! + .. + (-1)^n x^(2n)/(2n)! + ...

znak = (-1)^n   stepen = x^(2n)    fakt = (2n)!
za naredni
znak = -znak    stepen = stepen*x^2   fakt = (2n+2)*(2n+1)*fakt
na pocetku znak=1, stepen=1, fakt=1

u jednom koraku
naredniClan = (-1)^(n+1) x^(2n+2)/(2n+2)!  ako je clan=(-1)^n x^(2n)/(2n)!
naredniClan = clan*(-1)*x^2/((2n+2)(2n+1)), na pocetku clan=1
*/
int main() {
    double x, clan, suma = 0.0;
    const double eps = 1e-6;
    int n = 0;
    scanf("%lf", &x);
    clan = 1.0;
    do {
        suma += clan;
        clan = clan*(-1)*x*x/((2*n+2)*(2*n+1));
        n++;
    } while (fabs(clan) > eps);
    printf("suma je %.8lf\n", suma);
    printf("cos(%.6lf) = %.8lf\n", x, cos(x));

    return 0;
}
