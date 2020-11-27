#include <stdio.h>

void zameni(int &a, int &b) {
    int pom = a;
    a = b;
    b = pom;
}

int main() {
    int a, b,c;
    scanf("%d%d%d", &a, &b, &c);

    printf("pre zamene a=%d, b=%d  c=%d  \n", a, b, c);
    
    if(a > b) zameni(a, b);
	if(a > c) zameni(a, c);
	if(b > c) zameni(b, c);
	
    printf("nakon zamene a=%d, b=%d c=%d\n", a, b, c);

    return 0;
}
