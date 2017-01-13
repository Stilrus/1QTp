#include <QCoreApplication>
#include "iostream"
using namespace std;

int main()
{
    int x, max=0, num=-1;
            for(int i=0;num!=0;i++)
            {
                cin>>num;
                if (num > max)
                    max = num;
            }
    cout << max;

    return 0;
}
