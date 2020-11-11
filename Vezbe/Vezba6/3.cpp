#include<stdio.h>

int isPal(int );
int n;

int isPal(int aj)
{
    static int sum = 0;
    if(aj != 0)
    {
        sum = sum *10 + aj%10;
        isPal(aj/10);  
    }
    else if(sum == n)
        return 1;
    else
        return 0;
}

	

int main()
{
    int palindrome;
    scanf("%d", &n);
    palindrome = isPal(n);
    if(palindrome == 1)
        printf("%d  je palindrom", n);
    else
        printf("%d  nije palindrom ", n);

    return 0;
}


