
#include<stdio.h>
main()
{
int n, min, max;

scanf("%d", &n);
max=0;
min=n; 
while(n!=0)
{
if(n<min)
    min=n;
if (n>max)
    max=n;
scanf("%d", &n);
}
printf("max = %d min = %d", max, min );
return 0;
}
