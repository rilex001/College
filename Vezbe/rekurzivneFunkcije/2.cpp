

#include<stdio.h>
#include<math.h>

int suma(float x, int n) {
    if (n == 0) return 0;    
    return suma(pow(-1, n) * 1 / pow(x, n));
}



int main() {
    int n;
    float x;
    scanf("%d%lf", &n, &x);

    printf("Suma cifara %lf\n", suma(x, n));

    return 0;
} .

