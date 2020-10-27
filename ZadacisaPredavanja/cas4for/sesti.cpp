#include<stdio.h>
#include<math.h>
int main() {
	double x, suma;	
	int n;
	scanf("%d%lf", &n, &x);	
	//resenje sa pow
	suma = 0.0;
	for(int i = 1; i <= n; i++ ) {		
		suma += 1/pow(x, i*i);
	}
	printf("Suma sa pow: %.6lf\n", suma);
	
	return 0; 
}
