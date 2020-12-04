#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100   

void zameni(int *a, int *b) {
    int pom = *a;
    *a = *b;
    *b = pom;
}
bool provera(int n, float niz[]) {
	bool k = true;
    for (int i = 1; i < n; i++) {
        for (int j = i-1; j >= 0; j--) {
            if (niz[j] > niz[j+1])  {
            	k = false;
			} 
            else break;
        }
    }    
    return k;
}

int main() {
    
    float arr[MAX_SIZE], b[MAX_SIZE];
    int i, size;

    printf("Unesite broj clanova niza: ");
    scanf("%d", &size);

    printf("Unesite element niza: \n");
    for(i=0; i<size; i++)
    {
        scanf("%f", &arr[i]);
    }
    
    if(provera(size, arr)) printf("\nNiz je strogo rastuci");
    else printf("\nNiz nije strogo rastuc");
    
    return 0;
}
