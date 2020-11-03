#include<stdio.h>
#include<math.h>

int main() {
	int n, i, k;
	double suma;
	scanf("%d", &n);
	for( i = 2, suma = 0.0 ; i < n; i++) {
		k = i - 1;
		suma = sqrt(k + suma);
	}
	printf("%.4lf\n", suma);
	
	return 0;
}
