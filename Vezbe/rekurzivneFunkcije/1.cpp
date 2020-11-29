#include<stdio.h>

int suma(int n) {
    if (n == 0) return 0;    
    return suma(n / 10) + n%10;
}

int brcifara(int n) {
	if (n== 0) return 0;
	int br = 0;
	br = brcifara(n / 10);
	br++;

	return br;
}

int main() {
    int n;
    scanf("%d", &n);

    printf("Broj cifara %d\n Suma cifara %d\n ", brcifara(n), suma(n));

    return 0;
}
