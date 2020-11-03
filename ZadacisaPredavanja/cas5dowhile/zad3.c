#include <stdio.h>

//#define USE_GETCHAR
//#define USE_GETC
#define USE_SCANF

int main() {
    char ch;
    do {
        #ifdef USE_SCANF
        /* sa scanf & printf */
        scanf("%c", &ch);
        printf("%c", ch);
        #else
        #ifdef USE_GETCHAR
        /* sa getchar & putchar */
        ch = getchar();
        putchar(ch);
        #else
        #ifdef USE_GETC
        /* sa getc & putc */
        ch = getc(stdin);
        putc(ch, stdout);
        #else
        break;
        #endif
        #endif
        #endif
    } while (ch != '0');
    return 0;
}
