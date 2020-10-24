#include <stdio.h>
#include <math.h>

int main() {
	
    int n, suma, br, pom;
    scanf("%d", &n);

    suma = 0;
    br = 1;
    while (br <= n) {
    	pom = pow(br, 2);
        suma += pom;
        br++; 
    }

    printf("%d = %d\n", n, suma);

   return 0;
}
