#include<stdio.h>
//Ucitati dva prirodna broja a i b. Izracunati najveci zajednicki delilac
// NZd(a, b) za brojeve a i b 


int main() {
	int a, b, nzd, delilac;
	scanf("%i", &a);
	scanf("%i", &b);
	nzd = 1;
	delilac = 2;
	while(delilac <= a && delilac <= b) {
		if((a % delilac == 0)  && (b % delilac == 0)) nzd = delilac;
		delilac++;
	}
	printf("NZD(%d, %d)=%d.\n", a, b, nzd);
	
	return 0;
	
}






