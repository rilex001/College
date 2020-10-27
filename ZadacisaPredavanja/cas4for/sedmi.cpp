#include<stdio.h>
#include<math.h>

int main() {
	int n, i;
	double v;
	scanf("%d", &n);
	for( i = 0, v = 0.0 ; i < n; i++) {
		v = sqrt(2 + v);
	}
	printf("%.6lf\n", v);
	
	return 0;
}
