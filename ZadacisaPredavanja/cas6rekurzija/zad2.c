#include <stdio.h>

//#define KORISTI_REKURZIJU

long long faktorijel(int n) {
    if (n == 0) return 1;
    return n*faktorijel(n-1);
}

long long binomniBezRekurzije(int n, int k) {
    return faktorijel(n)/faktorijel(k)/faktorijel(n-k);
}

long long binomni(int n, int k) {
    if (k == 0 || k == n) return 1;
    if (k > n || k < 0) return 0;
    return binomni(n-1, k) + binomni(n-1, k-1);
}

void stampajPaskalovTrougao(int n) {
    for (int k = 0; k <= n; k++) {
        for (int i = 0; i <= k; i++) {
//            #ifdef KORISTI_REKURZIJU
            printf("%4lld", binomni(k, i));
//            #else
//            printf("%4lld", binomniBezRekurzije(k, i));
//            #endif
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    stampajPaskalovTrougao(n);

    return 0;
}
