#include <QCoreApplication>
#include "iostream"

using namespace std;

int main(int argc, char *argv[])
{
    double x;

    cout << "x = ";

    cin >> x;
    if (x > -3  and x < 0){
            cout << "y = " <<  3 + x << endl;
    }else if (x < 3 and x > 0){
                    cout << "y = " << 3-x << endl;
    }else {cout << "y = 3 "<< endl;}



    QCoreApplication a(argc, argv);

    return 0;
}
