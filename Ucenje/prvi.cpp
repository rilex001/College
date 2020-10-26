#include <stdio.h>

int main() {
	//Ucitati prirodan broj n izracunati sumu 1 + 2 + ... + n.
	int n, br, suma;
	br = 1;
	suma = 0;
	scanf("%d", &n);
	while(br <= n) {
		
		suma += br;
		br++;
		
	}
	
	printf("1+2+3+ ... + n =  %i", suma);

}
