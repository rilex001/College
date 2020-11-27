#include <stdio.h>
#include <stdlib.h>
#include <float.h>

void prosek(int n, float *rezultat, float *maxBroj, float *minBroj) {
    int suma = 0 , br = 0;
    int broj;
    *maxBroj = -FLT_MAX;
    *minBroj = FLT_MAX;
    do {
        broj = rand();
        printf("Random broj =%d\n", broj);
        if (broj > *maxBroj) *maxBroj = broj;
        if (broj < *minBroj) *minBroj = broj;
        suma += broj;
        n--;
        br++;
    } while ( n > 0);
    *rezultat = (float)suma / (float)br ;
    
}

int main() {
    int n;
    scanf("%d", &n);
    float s, max, min;
    prosek(n, &s, &max, &min);
    printf("Prosecna ocena:  = %.2f  Najmanji broj: %.2f  Najveci broj: %.2f ", s, min, max);
    return 0;
}
