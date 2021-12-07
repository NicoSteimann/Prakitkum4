#include <stdio.h>
#include "header.h"
#include <math.h>

 double zweif(double x);
 double dreif(double x);

int main() {
    printf("\nerstes newton:\n %f", newton(sin,2));
    printf("  Zaehler : %i", itenewton);

    printf("\nzweites newton:\n%f", newton(zweif,2));
    printf("  Zaehler : %i", itenewton);

    printf("\ndrittes newton:\n%f",newton(dreif,4.5));
    printf("  Zaehler : %i\n\n", itenewton);

    printf("\nerstes bisektion\n%f", bisection(sin,2,4));
    printf("  Zaehler : %i", itebisection);

    printf("\nzweites bisektion\n%f", bisection(zweif,0,3));
    printf("  Zaehler : %i", itenewton);

    printf("\ndrittes bisektion\n%f", bisection(dreif,4.4,4.5));
    printf("  Zaehler : %i\n\n", itenewton);

    printf("\nerstes regularfalsi\n%f", regularfalsi(sin,2,4));
    printf("  Zaehler : %i", iteregular);

    printf("\nzweites regularfalsi\n%f", regularfalsi(zweif,0,3));
    printf("  Zaehler : %i", iteregular);

    printf("\ndrittes regularfalsi\n%f", regularfalsi(dreif,4.4,4.5));
    printf("  Zaehler : %i\n\n", iteregular);
 return 0;
}

double zweif(double x){
    double z=0;
    z= (x*x)-3;

    return z;
}

double dreif(double x){
    double z= 0;
    z= tan(x)-x;

    return z;
}
