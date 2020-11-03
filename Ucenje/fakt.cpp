//Ucitati prirodan broj n, izracunati faktorijel n! = 

#include<stdio.h>

int main() {
	int n;
	long long fakt = 1;
	scanf("%d", &n);
	
	
	
	
	for(int i  = 1; i <= n; i++) {
		fakt *= i;
	}
	printf("%d! = %lld \n ", n, fakt);
}
