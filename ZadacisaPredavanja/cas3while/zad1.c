#include <stdio.h>

int main() {
    int n, suma, sabirak;
    scanf("%d", &n);

    // 1 + 2 + 3 + ... + n
    suma = 0;
    sabirak = 1;
    while (sabirak <= n) {
        suma += sabirak; //suma = suma + sabirak;
        sabirak++; // sabirak = sabirak + 1;
    }

    printf("1+2+...+%d=%d\n", n, suma);

    return 0;
}
