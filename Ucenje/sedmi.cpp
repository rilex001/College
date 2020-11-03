#include <stdio.h>
#include <math.h>
int main() {
	int n, i;
	double suma;
	scanf("%d", &n);
	for( i = 0, suma = 0.0; i < n; i++) {
		suma = sqrt(2 + suma);
	}
	
	printf("%.6lf \n", suma);
}


