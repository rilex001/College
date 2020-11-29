#include <stdio.h>

int main() {
	int a,b,k,o;
	scanf("%d", &a);
	scanf("%d", &b);
	k = a / b ;
	o = a % b;
	printf("kolicnik: %d Ostatak: %d", k, o);
}
