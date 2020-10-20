#include <stdio.h>

// definisani su true i false i tip bool za logicke vrednosti
// #include <stdbool.h>

#define true 1
#define false 0

int main() {
    int n, delilac, jeProst;
    scanf("%d", &n);

    /*
        n je prost ako je deljiv samo sa 1 i n
        znaci nije deljiv sa 2, 3, .., n-1
        ako n nije prost kaze se da je slozen
        n je slozen ako je deljiv sa nekim od 2, 3, .., n-1
    */
    printf("Resenje 'brute-force' - proverimo sve delioce 2..(n-1)\n");
    jeProst = true;
    if (n == 1) jeProst = false;
    delilac = 2;
    while (jeProst && delilac < n) {
        if (n%delilac == 0) jeProst = false;
        else delilac++;
    }
    if (jeProst) printf("Broj %d je prost.\n", n);
    else printf("Broj %d nije prost.\n", n);

    /*
        ako je n deljivo sa d onda je deljivo i sa n/d
        tako da je dovoljno ispitati manje delioce za koje je d<=n/d
        tj. d*d<=n, tj. za koje je d<=sqrt(n)
    */
    printf("Efikasno resenje - proverimo delioce 2..sqrt(n)\n");
    jeProst = true;
    if (n == 1) jeProst = false;
    delilac = 2;
    while (jeProst && delilac*delilac <= n) {
        if (n%delilac == 0) jeProst = false;
        else delilac++;
    }
    if (jeProst) printf("Broj %d je prost.\n", n);
    else printf("Broj %d nije prost.\n", n);

    return 0;
}
