#include <stdio.h>
#include "header.h"



double Ableitung(double (*f)(double), double x0)
{   double h = 0.001;
    double Heine=((f(x0+h)-f(x0-h))/(2*h));

    return Heine;
}

double newton(double (*f)(double), double x0) {
    int zaehler = 0;
    double ergebnis = x0;
    double zwischenErgebnis;

    do {

        zwischenErgebnis = ergebnis;
        ergebnis = (zwischenErgebnis) - ( f(zwischenErgebnis) / Ableitung(f,zwischenErgebnis) ); /* Fromel */

    }
    while (ABS(ergebnis - zwischenErgebnis) >= EPS && ++zaehler < MAX);
    return ergebnis;
}

double bisection(double (*f)(double), double a, double b){
    double links=a, rechts=b, mitte;
    int zaehler = 0;

    do {
        mitte=(links+rechts)/2;
        if (f(mitte) == 0) {
            return mitte;

        } else if (f(mitte) * f(links) > 0) {
            links = mitte;

        } else if (f(mitte) * f(rechts) > 0) {
            rechts = mitte;
        }
    }
    while (EPS<=ABS(rechts-links) &&  ++zaehler < MAX);
    return mitte;
}

