#include <QCoreApplication>
#include "iostream"
#include <math.h>
# define M_PI  3.14159  // pi
using namespace std;
int main(int argc, char *argv[])
{
    float pi;
    QCoreApplication a(argc, argv);

    pi = -(M_PI);
    while (pi <= M_PI){
        cout << "pi = "<< pow(sin(pi),2)<< endl;
        pi = pi + (M_PI/12);
    }

    return 0;
}// доделать
