#include<stdio.h>

int main() {
	int n, i;
	double v;
	scanf("%d", &n);
	
	for( i = n, v = 0.0; i >= 1; i--) {
		v = 1/(i + v);
	}
	printf("%.6lf\n", v);
	return 0;
}
