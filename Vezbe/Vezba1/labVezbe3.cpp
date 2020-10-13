#include <stdio.h>
#include <math.h>

int main() {
	float a,b,P,O,d;
	scanf("%f", &a);
	scanf("%f", &b);
	P = a * b ;
	O = 2 * (a + b);
	d = sqrt(pow(a,2) + pow(b,2));
	printf("P: %.2f O: %.2f d: %.2f", P, O, d);
}
