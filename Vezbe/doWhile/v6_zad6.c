#include <stdio.h>
#include <math.h>

double f(double x, double a, double b, double c, double d) {
    return a*x*x*x + b*x*x + c*x + d;
}

double df(double x, double a, double b, double c, double d) {
    return 3*a*x*x + 2*b*x + c;
}

int main() {
    const double eps = 1e-6;
    const int M = 50;

    double a, b, c, d;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);

    double curX; /* xn */
    double nextX = 0.0; /* x_{n+1} */
    int n = 0;
    do {
        n++;
        curX = nextX;
        nextX = curX - f(curX, a, b, c, d)/df(curX, a, b, c, d); /* x_{n+1} = x_n - f(x_n)/f'(x_n) */
    } while (n < M && fabs(nextX - curX) > eps);

    printf("xn=%.7lf, f(%.7lf)=%.7lf\n", curX, curX, f(curX, a, b, c, d));

    return 0;
}

