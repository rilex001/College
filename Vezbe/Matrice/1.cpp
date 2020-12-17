#include<stdio.h>
#include <limits.h>
 
#define MAX 100
 
int MaxVrste(int a[MAX][MAX],int i, int j) {
	int red, kolona, Sum, indeks, max;
	max  = INT_MIN;
	for(red = 0; red < i; red++)
    {
        Sum = 0;
        for(kolona = 0; kolona < j; kolona++)
        {
            Sum = Sum + a[red][kolona];
            if(Sum > max ) {
            	max = Sum;
				indeks = red;
			} 
        }
    }
    return indeks;
}

int MaxKolone(int a[MAX][MAX],int i, int j) {
	int red, kolona, Sum, indeks, max;
	max  = INT_MIN;
	for(red = 0; red < i; red++)
	{
        Sum = 0;
        for(kolona = 0; kolona < j; kolona++)
        {
            Sum = Sum + a[kolona][red];
            if(Sum > max ) {
            	max = Sum;
				indeks = red;
			} 
        }
    }
    return indeks;
}

int main()
{
    int  red, kolona, a[MAX][MAX], i , j;

    
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

    printf("Indeks vrste sa najvecom sumom u matrici je %d\n", MaxVrste(a, i , j));
    printf("Indeks kolone sa najvecom sumom u matrici je %d", MaxKolone(a, i , j));

    return 0;
}


