#include <stdio.h>

int main() {
    int n, zadnjaCifra, obrnutiBroj, brojCifara;
    scanf("%d", &n);

    /*
        23 -> 10111
            - zadnja cifra je n%2
            - brisanje zadnje cifre (pomeranje u desno za jedno mesto) n/2
            - dodavanje nule na kraj (pomeranje u levo za jedno mesto) n*2

        16 -> 10000
        stampace se 00001    obrnutiBroj ima vrednost 1 (00001)
        i kad ga stampamo obrnuto stampa se samo 1
    */
    obrnutiBroj = 0;
    brojCifara = 0;
    do {
        zadnjaCifra = n%2;
        printf("%d", zadnjaCifra);
        n = n/2;
        obrnutiBroj = 2*obrnutiBroj + zadnjaCifra;
        brojCifara++;
    } while (n != 0);
    printf("\n");

    do {
        zadnjaCifra = obrnutiBroj%2;
        printf("%d", zadnjaCifra);
        obrnutiBroj /= 2;
        brojCifara--;
    } while (obrnutiBroj != 0);
    while (brojCifara != 0) {
        printf("0");
        brojCifara--;
    }
    printf("\n");

    return 0;
}
