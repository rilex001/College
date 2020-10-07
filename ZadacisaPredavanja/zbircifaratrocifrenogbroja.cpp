#include <stdio.h>

int main() {
	int broj, zbir;
	scanf("%d", &broj);
	zbir = broj % 10 + broj / 100 + (broj % 100) / 10 ;
	printf("Broj je %d ", zbir);
	
	return 0;
}

