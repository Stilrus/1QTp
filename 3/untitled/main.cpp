#include <QCoreApplication>
#include "iostream"
#include <math.h>
#include <conio.h>
#include <cmath>

using namespace std;
double x,y;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    printf("X = ");
    scanf ("%lf",&x);

    y = pow(pow(fabs(x),0.5), 1.0/3) + fabs((pow(cos(x)/sin(x),2)) + ((exp(x)) / 2 * 3.14 ) - pow(x,3));
    printf("%.3lf",y);

    return 0;
}
