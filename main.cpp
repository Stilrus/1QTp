#include <QCoreApplication>
#include"iostream"
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int num_1;

    cout << "nombr" << endl;
    cin >> num_1;
    cout << (num_1/10) + (num_1%10);

    return 0;
}
