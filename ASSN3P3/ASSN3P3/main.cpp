#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
double x;
int calc,i,temp;

int main()
{
    cin>>x;
    temp = getchar();
    for (i = 1;i <= 100;i++)
    {
        calc = getchar();
        if (calc == '\n') break;
        switch(calc)
        {
            case 'A': x = x*2; break;
            case 'B': x = x/3; break;
            case 'C': x = x + 1; break;
            case 'D': x = x - 8; break;
            case 'E': x = -x; break;
            case 'F': x = x - 1/x; break;
        }
    }
    cout<<setiosflags(ios::fixed)<<setprecision(4)<<x<<endl;
    return 0;
}
