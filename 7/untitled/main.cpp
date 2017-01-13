#include <QCoreApplication>
#include "iostream"

using namespace std;
int main(int argc, char *argv[])
{
    float pi;
    QCoreApplication a(argc, argv);

    pi = -3.14;
    while (pi <= 3.14){
        cout << pow(sin(pi),2);
        pi = pi + 0.26;
    }

    return 0;
}
