#include<stdio.h>
#include <limits.h>
#define Max 100


int Poseban(int a[Max][Max],int  r, int  c) {
	int i, j, maxRed, maxKolona, br = 0;
	for(i=0;i<r;i++) {
		maxRed=INT_MIN;
		maxKolona=INT_MIN;
	for(j=0;j<c;j++) {
		if(a[i][j] > maxRed) {
			maxRed = a[i][j];
		}
		if(a[i][j] > maxKolona) {
			maxKolona = a[j][i];
		}				
	}
	if(maxRed == maxKolona) br++;
//	printf("Najveci element u redu %d\n", maxRed);
//	printf("Najveci element u koloni %d\n", maxKolona);
	maxRed = 0;
	maxKolona = 0;
	}
	
	return br;
}

main(){

int  red, kolona, a[Max][Max], i , j;

    
    printf("Unesite vrste i kolone  :  ");
    scanf("%d %d", &i, &j);
    
    printf("Unesite elemente matrice \n");
    for(red = 0; red < i; red++)
    {
        for(kolona = 0; kolona < j; kolona++)
        {
            scanf("%d", &a[red][kolona]);
        }
    }
printf("Broj posebnih brojeva %d", Poseban(a, i , j));

}
