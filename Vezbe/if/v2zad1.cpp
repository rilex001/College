#include<stdio.h>
#include<math.h>
int main() {
	
	float a, k, Pt, Pk;
	scanf("%f", &a);
	scanf("%f", &k);
	Pk = k * k;
	Pt = sqrt(3) / 4 * a*a;
	if(Pk > Pt) 	printf("Vecu povrsinu ima kvadrat");
	else if(Pk < Pt) printf("Vecu povrsinu ima jedankostranicni trougao");
	else printf("Imaju jednake povrsine");
	
	return 0;
}
