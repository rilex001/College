// Ucitati broj n. Izracunati sumu:
//  1/(1^2 + n^3) + 1/(2^2+(n-1)^3 + 1/(n^2+1^3)
//#include<stdio.h>
//int main() {
//	int n;
//	double suma = 0.0;
//	scanf("%d", &n);
//	for(int i = 1, j=n ; (i <= n) && (j >= 1); i++,  j-- ) {
//		suma += 1.0 / (i*i + j*j*j);
//	}
//	printf("%.6lf\n", suma);
//	
//	return 0;
//}


#include<stdio.h>

int main() {
	int n;
	double suma = 0.0;
	scanf("%d", &n);
	for(int i = 1, j = 2, k = 3; (j <= n)  && (k <=n); i++, j++, k++ ) {
		suma += float(i) / (j+k) + float(j) / (k+(i+j));
	}
	printf("Suma = %.6lf", suma);
}


