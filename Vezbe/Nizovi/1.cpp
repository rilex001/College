#include <stdio.h>

#define MAX_SIZE 100   

int maksimum(int arr[],int  n){
	int max, i, k;
	max = arr[0];
	for(i = 0; i < n; i++) {
		if(arr[i] > max) {
			max = arr[i];
			k = i;
		} 
	}
	
	return k;
}
int minimum(int arr[],int  n){
	int min, i, l;
	min = arr[0];
	for(i = 0; i < n; i++) {
		if(arr[i] < min) {
			min = arr[i];
			l = i;	
		} 
	}
	
	return l;
}
int main()
{
    int arr[MAX_SIZE];
    int i, size;

    printf("Unesite broj clanova niza: ");
    scanf("%d", &size);

    printf("Unesite element niza: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Indeks najveceg elementa niza = %d\n", maksimum(arr, size));
    printf("Indeks najmanjeg elementa niza = %d", minimum(arr, size));

    return 0;
}
