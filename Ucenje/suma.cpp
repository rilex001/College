#include <stdio.h>

int main() {
	//Ucitati prirodan broj n izracunati sumu cifara broja n.
	int n, suma, br;
	scanf("%d", &n);
	while(n > 0) {
		br = n % 10;
		suma += br;
		n /= 10;
	}
	
	printf("Suma cifara broja n :  %d", suma);
	
	return 0;
}
