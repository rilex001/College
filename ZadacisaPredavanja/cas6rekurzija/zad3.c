#include <stdio.h>

int brojJedinica(int n) {
    if (n == 0) return 0;
    return brojJedinica(n/2) + (n%2);
}

int main() {
    int n;
    scanf("%d", &n);

    printf("Broj jedinica u binarnom zapisu broja %d je %d.\n", n, brojJedinica(n));

    return 0;
}
