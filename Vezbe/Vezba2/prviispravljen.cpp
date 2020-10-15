#include <stdio.h>
#include <math.h>
int main() {
	
	
	float a, k, PovrsinaTrougla, PovrsinaKvadrata;
	
	scanf("%f", &a);
	scanf("%f", &k);
	PovrsinaTrougla = (pow(a, 2) * sqrt(3)) / 4;
	PovrsinaKvadrata = pow(k, 2);
	if(PovrsinaTrougla == PovrsinaKvadrata) printf("Imaju jednake povrsine");
	else if(PovrsinaTrougla > PovrsinaKvadrata) printf("Trougao ima vecu povrsinu");
	else printf("Kvadrat ima vecu povrsinu");
	
	
	return 0;
}
