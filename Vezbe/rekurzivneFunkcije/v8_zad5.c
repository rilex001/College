#include <stdio.h>

void varijacije(int i, int n, int m, long long stampa) {
    if (i >= n) {
        printf("%lld\n", stampa);
        return;
    }
    for (int v = 1; v <= m; v++) {
        varijacije(i+1, n, m, 10*stampa + v);
    }
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    varijacije(0, n, m, 0);

    return 0;
}
