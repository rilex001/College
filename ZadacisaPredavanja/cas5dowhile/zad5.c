#include <stdio.h>
#include <ctype.h>

/*
1 ... 100
x = 50
D => 51 .. 100
N => 1 .. 50

L  L+1 .. R-1 R    [L, R]
X = (L+R)/2
D => X+1 .. R    [X+1,R]
N => L .. X       [L, X]
u slucaju L==R => zamisljeni broj L

2^x ... ~x .. log(duzine intervala)
log_2(100) ~ 7 pitanja da se nadje odgovor
log_2(1000000) ~ 20 pitanja
*/

int main() {
    int L = 1, R = 100, X;
    char odgovor;

    printf("Zamisli broj izmedju 1 i 100.\n");
    do {
        X = (L+R)/2;
        printf("Da li je zamisljeni broj veci od %d? ", X);
        scanf("%c", &odgovor);
        switch (toupper(odgovor)) {
        case 'D':
            L = X+1;
            getchar();
            break;
        case 'N':
            R = X;
            getchar();
            break;
        default:
            printf("Neispravan odgovor %c. Upisati 'D' za da, odnosno 'N' za ne.\n", odgovor);
        }
    } while (L < R);
    if (L == R) printf("Zamislio si broj %d.\n", L);
    else printf("Greska u procesiranju, odgovori nisu konzistentni.\n");

    return 0;
}
