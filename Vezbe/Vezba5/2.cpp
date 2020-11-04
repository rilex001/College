#include<stdio.h>
#include<math.h>
int main() {
	
	int n, br = 1;	
	double pi, rez;
	pi = 3.14159 / 4;
	double suma;
	suma = 0.0;
	scanf("%d", &n);
	
	do {
		suma += pow(-1, br) * 1 / (2 * br + 1);
		br++;
	} while(br <= n);
	
	
	rez = pi - suma;
	if(rez > 0) printf("Pi je veci za %.4lf", rez) ;
	else printf("Pi je manji za %.4lf", rez);
	
	
	return 0;
}
