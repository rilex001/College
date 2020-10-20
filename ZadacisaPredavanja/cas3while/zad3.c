#include <stdio.h>

int main() {
    /*
        zajednicki delilac za a i b
            broj k koji deli oba k|a i k|b
            na primer za 12 i 18 zajednicki delioci su 2, 3, 6
        najveci zajednicki delilac za a i b se oznacava sa (a, b) ili NZD(a, b)
        i to je najveci od svih zajednickih delilaca
    */
    int a, b, nzd, delilac, p, q, r;
    scanf("%d%d", &a, &b);

    printf("Resenje 'brute-force' - probamo sve delioca:\n");
    nzd = 1;
    delilac = 2;
    while (delilac<=a && delilac<=b) {
        if ((a%delilac==0) && (b%delilac==0)) nzd = delilac;
        delilac++;
    }
    printf("NZD(%d, %d)=%d.\n", a, b, nzd);

    /*
        d|a   i  d|b, to znaci a=d*p, b=d*q
        pa je razlika a-b=d*(p-q)
        zajednicki delilac od a i b deli i a-b
        ako je a >= b onda je NZD(a, b)=NZD(a-b, b)
        NZD(a, 0)=a
    */
    printf("Resenje 'sa oduzimanjem':\n");
    p = a;
    q = b;
    while (p > 0 && q > 0) {
        if (p > q) p -= q; // p = p-q;
        else q -= p; // q = q-p;
    }
    if (p > 0) nzd = p; else nzd = q;
    printf("NZD(%d, %d)=%d.\n", a, b, nzd);

    /*
        a > b imamo da je a=b*q+r
        i ako je d=NZD(a, b) onda d|a-b*q=r => d|r
        NZD(a, b)=NZD(b, r)=NZD(b, a%b)
        NZD(p, q)=NZD(q, p%q)
    */
    printf("Efikasno resenje 'koristeci ostatke':\n");
    p = a;
    q = b;
    while (q != 0) {
        r = p%q;
        p = q;
        q = r;
    }
    nzd = p;
    printf("NZD(%d, %d)=%d.\n", a, b, nzd);

    return 0;
}
