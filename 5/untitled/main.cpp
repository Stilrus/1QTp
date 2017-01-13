#include <QCoreApplication>
#include "iostream"
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    double x, y;

    cout << "X = ";
    cin >> x;
    cout << "Y = ";
    cin >> y;

   if ((x<0) and ((5*x)+4 > (2 * y)) and y > -3){
    cout << "Yes";
}else if ((x>0) and ((5*x)-4 < (-2 * y)) and y > -3){
       cout << "Yes";
    }else cout << "No";


    return 0;
}
