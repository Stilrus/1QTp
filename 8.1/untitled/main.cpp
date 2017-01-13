#include <QCoreApplication>
#include "iostream"
using namespace std;

int main(int argc, char *argv[])
{
    int i;
       int sum = 0;
       for (i = 11; i <= 99; i++)
       {
           if (i%2 == 0 and i%10 !=0){
               sum++;
           }
       }
       cout   << sum << endl;
       return 0;

}
