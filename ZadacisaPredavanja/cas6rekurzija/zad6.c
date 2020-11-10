#include <stdio.h>

int resiHanojskeKule(int n, int sa, int na, int pom) {
    if (n == 0) return 0;
    int brojKoraka = 0;

    // n-1 najmanjih premestamo sa sipke "sa" na pomocnu sipku "pom"
    brojKoraka += resiHanojskeKule(n-1, sa, pom, na);

    // najveci disk n premestamo sa sipke "sa" na sipku "na"
    brojKoraka++;
    printf("disk %d ide sa sipke %d na sipku %d\n", n, sa, na);

    // vracamo n-1 najmanjih diskova sa sipke "pom" na sipku "na"
    brojKoraka += resiHanojskeKule(n-1, pom, na, sa);

    return brojKoraka;
}

int main() {
    int n;
    scanf("%d", &n);

    int brojKoraka = resiHanojskeKule(n, 1, 2, 3);
    printf("Resio Hanojske kule za %d diskova u %d koraka.\n", n, brojKoraka);

    return 0;
}
