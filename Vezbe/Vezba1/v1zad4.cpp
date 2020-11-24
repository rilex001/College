#include <stdio.h>
#include <math.h>

int main() {
	float r,d,V,m, VZemlje, mZemlje;
	const float pi = 3.14;
	const float rZemlje = 6371;
	const float dZemlje = 5513;
	scanf("%f", &r);
	scanf("%f", &d);
	
	V = 4 / 3 * pow(r,3) * pi ;
	m = V * d ;
	
	VZemlje = 4 / 3 * pow(rZemlje, 3) * pi;
	mZemlje = VZemlje * dZemlje ;
	
	printf("V : %.2f m: %.2f", V, m );
	printf(" \nV zemlje : %.2f m Zemlje : %.2f", VZemlje, mZemlje );
	
}
