#include <stdio.h>
int stepenovanje(int n1, int n2);
int main() {
    int x, n;
    double rezultat;
    printf("Unesite x: ");
    scanf("%d", &x);
    printf("Unesite n:  ");
    scanf("%d", &n);
    rezultat = stepenovanje(x, n);
    printf("%d^%d = %d", x, n, rezultat);
    return 0;
}

int stepenovanje(int x, int n) {
    if (n != 0)
        return (x * stepenovanje(x, n - 1));
    else
        return 1;
}


