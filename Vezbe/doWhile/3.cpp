#include<stdio.h>
#include<stdlib.h>

int main() {
	int broj, a,b,c,br, x = 0;
	br = 0;
	const int k = 10;
//	broj = rand()%30;
	
	printf("Unesite tri razlicita broja izmedju 1 i 30 ");
	scanf("%d%d%d", &a,&b,&c);
	
	do{
		broj = rand()%30;
		printf("%d\n", broj);
		if(a == broj || b == broj || c == broj) x++;
		br++;
	} while(br < k);
	
	printf("Korisnik je pogodio %d broja", x);
	
}
