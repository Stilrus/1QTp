#include <QCoreApplication>
#include "iostream"
using namespace std;
int main(int argc, char *argv[])
{
    float x1,x2,y1,y2,r1,r2,d;
    QCoreApplication a(argc, argv);
    cout << "X1 = ";
    cin >> x1  ;
    cout << "Y1 = ";
    cin >> y1  ;
    cout << "R1 = ";
    cin >> r1  ;
    cout << "X2 = ";
    cin >> x2 ;
    cout << "Y2 = ";
    cin >> y2 ;
    cout << "R2 = ";
    cin >> r2 ;
    d = pow(pow((x2 - x1),2) + pow((y2 - y1),2),0.5);
    if (d > r1+r2){
        cout << "no intersection";
    }else if (d == r1+r2){
        cout << "contact";
    }else cout << "intersection";


    return 0;
}
