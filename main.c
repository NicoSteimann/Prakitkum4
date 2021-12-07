#include <stdio.h>
#include "header.h"
#include <math.h>

 double zweif(double x);
 double dreif(double x);

int main() {
    printf("\nerstes newton:\n %f", newton(sin,2));

    printf("\nzweites newton:\n%f", newton(zweif,2));

    printf("\ndrittes newton:\n%f\n\n",newton(dreif,4.5));

    printf("\nerstes bisektion\n%f", bisection(sin,2,4));

    printf("\nzweites bisektion\n%f", bisection(zweif,0,3));

    printf("\ndrittes bisektion\n%f", bisection(dreif,4.4,4.5));
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
