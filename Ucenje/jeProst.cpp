#include<stdio.h>

#define true 1
#define false 0

//Ucitati prirodan broj n. Odrediti da li je broj n prost ili ne. Broj n je
//prost ako je veci od 1 i deljiv samo sa 1 i n

int main() {
	int n, delilac, jeProst;
	scanf("%d", &n);
	delilac = 2;
	jeProst = true;
	if(n == 1) jeProst = false;
	delilac = 2;
	while(jeProst && delilac < n) {
		if (n % delilac == 0 ) jeProst = false;
		else delilac++;
	}
	if(jeProst) printf("Broj %d je prost.\n", n);
	else printf("Broj %d nije prost.\n", n);
	
	
	
	
	
	return 0;
}
