//Ucitati prirodan broj n. Izracunati sumu 1 + 4 + 9 + ... +n2.

#include <stdio.h>
#include <math.h>

int main() {
	
    int n, suma, br, pom;
    scanf("%d", &n);

    suma = 0;
    br = 1;
    do {
    	pom = pow(br, 2);
        suma += pom;
        br++; 
    } while (br <= n);

    printf("%d = %d\n", n, suma);

   return 0;
}
