#include<stdio.h>
#include<math.h>
int main() {
	
	int n;
	double pi, rez;
	pi = 3.14159;
	double suma;
	suma = 0.0;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
		suma += pow(-1, i) * 1 / (2 * i + 1);
	}
	rez = pi - suma;
	if(rez > 0) printf("Pi je veci za %.4lf", rez) ;
	else printf("Pi je manji za %.4lf", rez);
	
	
	printf("Suma: %.4lf", suma);
	return 0;
}
