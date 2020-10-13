#include <stdio.h> 

int main() {
	
	int broj;
	scanf("%d", &broj);
	switch(broj) {
		case 1: printf("Nedovoljan");
			break;
		case 2: printf("Dovoljan");
			break;
		case 3: printf("Dobar");
			break;
		case 4: printf("Vrlo dobar");
			break;
		case 5: printf("Odlican");
			break;
		default: printf("Pogresno ste uneli broj");
	}
	return 0;
}
