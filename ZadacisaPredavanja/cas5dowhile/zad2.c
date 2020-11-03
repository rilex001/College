#include <stdio.h>

//14->7->22->11->34->17->52->26->13->40->20->10->5->16->8->4->2->1
int main() {
    int n;
    scanf("%d", &n);
    do {
        if (n%2 == 0) n = n/2;
        else n = 3*n+1;
        printf("->%d", n);
    } while (n != 1);
    printf("\n");

    return 0;
}
