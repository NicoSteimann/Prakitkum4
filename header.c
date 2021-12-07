#include <stdio.h>
#include "header.h"


double Ableitung(double (*f)(double), double x0) {
    double h = 0.001;
    double Heine = ((f(x0 + h) - f(x0 - h)) / (2 * h));

    return Heine;
}

double newton(double (*f)(double), double x0) {
    double ergebnis = x0;
    double zwischenErgebnis;
    itenewton=0;

    do {

        zwischenErgebnis = ergebnis;
        ergebnis = (zwischenErgebnis) - (f(zwischenErgebnis) / Ableitung(f, zwischenErgebnis)); /* Fromel */

    } while (ABS(ergebnis - zwischenErgebnis) >= EPS && ++itenewton < MAX);
    return ergebnis;
}

double bisection(double (*f)(double), double a, double b) {
    double links = a, rechts = b, mitte;
    itebisection=0;

    do {
        mitte = (links + rechts) / 2;
        if (f(mitte) == 0) {
            return mitte;

        } else if (f(mitte) * f(links) > 0) {
            links = mitte;

        } else if (f(mitte) * f(rechts) > 0) {
            rechts = mitte;
        }
    } while (EPS <= ABS(rechts - links) && ++itebisection < MAX);
    return mitte;
}

double regularfalsi(double (*f)(double), double a, double b) {
    double links = a, rechts = b, mitte,vergleich;
    iteregular = 0;
    mitte =a; /* mitte auf a setzen weil sonst knosch */

    do {
        vergleich= mitte;
        mitte = links - ((rechts - links) / (f(rechts) - f(links))) * f(links);

         if (f(mitte) == 0 || mitte==vergleich) {
             return mitte;
         }

         else if (f(rechts) * f(mitte) > 0) {
            rechts = mitte;

        } else if (f(links) * f(mitte) > 0) {
            links = mitte;
        }
    } while (EPS <= ABS(rechts - links) && ++iteregular < MAX);
    return mitte;
}

