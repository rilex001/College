#include<stdio.h>

    int main()

{
    FILE * fin;
    int br = 1;
    char c;
    fin = fopen("domaci.txt", "r");
    if (fin == NULL) {
        printf("Greska prilikom otvaranja fajla.\n");
    }
    while((c = fgetc(fin)) != EOF) {
        if(c == ' ')
            br++;
    }
    printf("Reci u fajlu ima = %d\n", br);
    return 0;
}
