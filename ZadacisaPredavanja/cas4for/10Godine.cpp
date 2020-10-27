#include <stdio.h>

int main() {
	int n, dan = 27, mesec = 10, godina = 2020, brojDanaUMesecu;
	scanf("%d", &n);
	// n puta racunamo datum narednog dana
	for(int i = 0; i < n; i++) {
		switch (mesec) {
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				brojDanaUMesecu = 31;
				break;
			case 4: case 6: case 9: case 11:
				brojDanaUMesecu = 30;
				break;
			case 2:
				if((godina%4==0 && godina%100!= 0) || godina%400==0) {
					brojDanaUMesecu = 29;	
				} else {
					brojDanaUMesecu = 28;
				}
		}
		//racunamo datum narednog dana
		dan++;
		if(dan > brojDanaUMesecu) {
			dan = 1;
			mesec++;
			if (mesec > 12) {
				mesec = 1;
				godina++;
			}
		}
	}
	printf("%2d.%2d.%4d.\n", dan, mesec, godina);
	
	return 0;
}
