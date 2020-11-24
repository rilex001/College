#include<stdio.h>
#include<math.h>
int main() {
	
	
	int br, n;
	
	float suma, Pi, rez;
	Pi = 3.14 / 4;
	br = 0;
	suma = 0.0;
	scanf("%d", &n);
	while(br <= n) {
		suma += pow(-1, br) * 1 / (2 * br + 1);
		br++;
	}
	
//	printf("Suma je : %f ", suma);
	rez = Pi - suma;
	if(rez > 0) printf("Pi je veci za %.4lf", rez) ;
	else printf("Pi je manji za %.4lf", rez);
	
}
