#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*

Puž se kreće po ravni. Na početku se nalazi u koordinatnom početku sa koordinatama . U svakom
koraku on se kreće u jednom od četiri smera - gore, dole, desno, levo - koji odabere na slučajan način.
Dužina puta koji pređe u jednom koraku je 1. Izračunati prosečnu vrednost x i y koordinate na kojoj će
puž da se nađe nakon n koraka. Broj n učitati sa ekrana. Simulaciju kretanja od koraka ponoviti k
puta, gde je k broj koji učitate sa ekrana.

*/


int main() {
    srand(time(NULL));

    int n, k, m, x, y;
    scanf("%d%d", &n, &k);

    double sumX = 0.0, sumY = 0.0;
    do {
        m = n;
        x = 0;
        y = 0;
        do {
            switch (rand()%4) {
                case 0: x++; break;
                case 1: y++; break;
                case 2: x--; break;
                case 3: y--; break;
            }
            m--;
        } while (m > 0);
        sumX += x;
        sumY += y;
        k--;
    } while (k>0);
    /*
      w++    prvo vrati kao rezultat w a onda poveca (w = w+1)
      ++w    prvo poveca w (w = w+1) a onda vrati tako povecano w
        w = 5;
        a = w++; -> a ima vrednost 5 a w je sada 6
        b = ++w; -> b ima vrednost 7 a w je isto 7
    */
    printf("(%.6lf, %.6lf)", sumX/n, sumY/n);

    return 0;
}
