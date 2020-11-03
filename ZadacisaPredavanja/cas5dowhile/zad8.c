#include <stdio.h>

/*
   1/(1+1+n) + 1/(2+3+(n-1)) + 1/(3+5+(n-2)) + ...
    1/(i+j+k)
*/
int main() {
    int n;
    double suma = 0.0;
    scanf("%d", &n);
    for (int i=1, j=1, k=n; j<=n; i++, j+=2, k--) {
        suma += 1.0/(i+j+k);
        // suma += 1.0/(i+(2*i-1)+(n-i+1)); // sa jednim brojacem
    }
    printf("%.6lf\n", suma);

    return 0;
}
