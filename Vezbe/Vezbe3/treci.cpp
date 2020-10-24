#include <stdio.h>

int main() {
    int n, broj, zadnjaCifra, br, k, poseban;
    br = 0;
    poseban = 0;
    scanf("%d", &n);

    /*
        12345
            - za poslednju cifru imamo n%10
            - brisanje poslednje cifre n/10
    */
    broj = n;
    while (broj != 0) {
    	
        zadnjaCifra = broj%10;
        broj /= 10; // n = n/10;
        if(zadnjaCifra == 3 || zadnjaCifra == 7) {
        	poseban++;
        	printf("poseban: %i", poseban);
		} else {
			break;
		}
    }
    
    while(broj != 0) {
    	k = broj%10;
    	broj /= 10;
    	br++;
    	printf(" Brojac %i", br);
	}
	
	poseban == br ? printf("Broj je poseban") : printf("Broj nije poseban");
   

    return 0;
}
