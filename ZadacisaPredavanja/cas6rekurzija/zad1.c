#include <stdio.h>

int suma(int n) {
    if (n == 0) return 0;
    return suma(n-1) + n;
}

int main() {
    int n;
    scanf("%d", &n);

    printf("1+2+..+%d = %d\n", n, suma(n));

    return 0;
}
