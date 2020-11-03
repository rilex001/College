#include <stdio.h>
#include <math.h>
int main() {
	int n;
	double x, suma;
	suma = 0.0;
	scanf("%d%lf", &n, &x);
	for(int i = 1; i <= n; i++) {
		suma += 1/pow(x, i * i);
	}
	printf("Suma : %.6lf", suma);
	return 0;
}




