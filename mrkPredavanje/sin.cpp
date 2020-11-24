#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main() {
	
	double x, stepen, fakt, suma, clan;
	int i, k;
	const double eps = 1e-6;
	
	scanf("%lf", &x);
	printf("Suma racunata postupno: ");
	suma = 0;
	i = 1;
	while(true) {
		stepen = pow(x, 2*i+1);
		
		//racunamo (2*i+1)! pomocu while
		fakt = 1;
		k = 1;
		while(k <= 2*i+1) {
			fakt *= k;
			k++;
		}
		clan = stepen / fakt;
		
		if(fabs(clan) < eps) break;
		// (-1)^i je 1 ako je i paran
		clan = pow(-1, i);
		
		suma += clan;
		i += 2;
		
	}
	printf("%.7lf/n", suma);
	return 0;
}
