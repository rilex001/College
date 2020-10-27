#include<stdio.h>

int main() {
	int n, suma;
	suma = 0;
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++) {
		suma += i;
	}
	printf("%d", suma);
	return 0;
}

//Ucitati prirodan broj n, izracunati sumu 1 + 2 + ... + n;
