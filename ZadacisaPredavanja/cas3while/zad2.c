#include <stdio.h>

int main() {
    int n, broj, zadnjaCifra, zbirCifara = 0;
    scanf("%d", &n);

    /*
        12345
            - za poslednju cifru imamo n%10
            - brisanje poslednje cifre n/10
    */
    broj = n;
    while (broj != 0) {
        zadnjaCifra = broj%10;
        broj /= 10; // n = n/10;
        zbirCifara += zadnjaCifra; // zbirCifara = zbirCifara + zadnjaCifra;
    }

    printf("Zbir cifara broja %d je %d.\n", n, zbirCifara);

    return 0;
}
