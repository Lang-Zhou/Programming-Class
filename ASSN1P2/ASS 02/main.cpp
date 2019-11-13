#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    double spag;
    int cal;
    double tax;
    cin>>spag;
    cal = spag/1000;
    if (cal>=0 && cal<=24)
    switch (cal)
    {
        case 0 :
        case 1 :
        case 2 : tax = 0;break;
        case 3 :
        case 4 :
        case 5 :
        case 6 :
        case 7 :
        case 8 :
        case 9 :
        case 10 :
        case 11 : tax = (spag-3000)*0.1;break;
        case 12 :
        case 13 :
        case 14 :
        case 15 :
        case 16 :
        case 17 :
        case 18 :
        case 19 :
        case 20 :
        case 21 :
        case 22 :
        case 23 :
        case 24 : tax = 900+(spag-12000)*0.2;break;
    }
        else
            if (spag == 25000)
                tax = 900+(spag-12000)*0.2;
            else tax = 3500+(spag-25000)*0.3;
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<tax<<endl;
    return 0;
}
