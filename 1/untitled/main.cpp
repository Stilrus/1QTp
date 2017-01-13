#include <QCoreApplication>
#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
setlocale(0,"");
    QCoreApplication a(argc, argv);

    int num_1, num_2, num_3;
    cout << "VVedite 3 chisla " << endl;

    cin >> num_1;
    cin >> num_2;
    cin >> num_3;
    cout << "Arif progres "<<((num_1 + num_2 + num_3)/3) << endl;
    cout << "Geom progres " << pow((num_1 * num_2 * num_3),(1.0/3)) << endl;

    return 0;
}
