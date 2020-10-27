//Ucitati prirodan broj n, Izracunati mu zbit delilaca

#include<stdio.h>

int main() {
	int n, suma = 0;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
		if(n % i == 0) {
			suma += i;
		}
	}
	printf("Suma: %d", suma);
}
