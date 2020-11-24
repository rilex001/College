#include<stdio.h>
// 1 dolar vredi vd dinara a 1 evro vredi ve dinara  ko ce nakon konverzije 
// imati vise dinara

#define vd 100 // kurs dolara
#define ve 1000 // kurs evra

int main() {
	float a, e, A, B;
	printf("Koliko Aca ima dolara ? ");
	scanf("%f", &a);
	printf("Koliko Braca ima evra ? ");
	scanf("%f", &e);
	
	A = a * vd;
	B = e * ve;
	
	if(A > B) printf("Aca ima vise dinara");
	if(A < B) printf("Braca ima vise dinara");
	else printf("Imaju jednako");
	
	return 0;
	
}
