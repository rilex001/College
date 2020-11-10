#include <stdio.h>
#include <math.h>

double korenje(int n) {
    return (n == 0) ? 0.0 : sqrt(2+korenje(n-1));
    /*
    if (n == 0) return 0.0;
    return sqrt(2 + korenje(n-1));
    */
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%.6lf\n", korenje(n));

    return 0;
}
