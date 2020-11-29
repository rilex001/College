#include<stdio.h>

int suma(int n){
    if(n==0)
    return 0;
    return suma (n-1)+n;
}
int faktorijel(int n){
    if(n==0)
    return 1;
    return n*faktorijel(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("Suma: %d \n ",suma(n));
    printf("Proizvod n brojeva  %d",faktorijel(n));
    return 0;
}
