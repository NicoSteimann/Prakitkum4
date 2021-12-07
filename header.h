/* precision to reach  */
#define EPS 1.E-12
/*
* calculate a point x with f(x)=0 within EPS precision.
* @param f function to use
* @param x0 the starting point.
* @return x with f(x)=0
*/
 double newton(double (*f)(double), double x0);
#define ERROR -1
#define ABS(x) ((x) > 0 ? (x) : -(x))
#define MAX 256
/* calculate a point x with f(x)=0 within EPS precision.
 * @param f function to use
 * @param a the left border
 * @param b the right border
 * @return x with f(x)=0
*/
 double bisection(double (*f)(double), double a, double b);
double regularfalsi(double (*f)(double), double a, double b);

int itenewton;
int iteregular;
int itebisection;
