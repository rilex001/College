#include <stdio.h> 

int main() {
	const float pi = 3.14;
	float p, o, r;
	scanf("%f", &r);
	o = 2 * r * pi;
	p = r * r * pi;
	printf("O = %f P = %f", o, p);
}
