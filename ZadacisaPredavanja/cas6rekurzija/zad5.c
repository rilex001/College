#include <stdbool.h>
#include <stdio.h>

bool jeProst(int n) {
    if (n <= 1) return false;
    for (int d = 2; d*d <= n; d++) {
        if (n%d == 0) return false;
    }
    return true;
}

int sledeciProst(int prost) {
    /*
    rekurzivno:
    if (jeProst(prost+1)) return prost+1;
    else return sledeciProst(prost+1);
    */
    do prost++; while (!jeProst(prost));
    return prost;
}

double verizni(int prost, int dubina, int n) {
    if (dubina == n) return 1.0/prost;
    return 1.0/(prost + verizni(sledeciProst(prost), dubina+1, n));
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%.6lf\n", verizni(2, 1, n));

    return 0;
}
