#include <stdio.h>
#include <stdlib.h>

int main() {
    int suma = 0, broj;
    srand(time(NULL));
    do {
        broj = rand()%11;
        printf("broj=%d\n", broj);
        suma += broj;
    } while (broj != 0);
    printf("Suma slucajnih brojeva je %d.\n", suma);

    return 0;
}
