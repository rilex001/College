#include <stdio.h>

/*
    1/(1^2 + n^3) + 1/(2^2 + (n-1)^3) + .. + 1/(n^2 + 1^3)
*/

int main() {
    int n;
    double suma = 0.0;
    scanf("%d", &n);

    for (int i=1, j=n; i <= n; i++, j--) {
        suma += 1.0 / (i*i + j*j*j);
        // suma += 1.0 / (i*i + (n-i+1)*(n-i+1)*(n-i+1)); // sa jednim brojacem
    }
    printf("%.6lf\n", suma);

    return 0;
}
