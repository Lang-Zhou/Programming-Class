#include<iostream>
#include<stdio.h>
using namespace std;

int length;
int sum1 = 0,sum2 = 0;
int i;

int judge(int x)
{
    if (2*(x/2) == x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    cin>>length;
    int input[length];
    for (i = 0;i < length;i++)
    {
        cin>>input[i];
    }
    for (i = 0;i < length;i++)
    {
        if (judge(input[i]) == 0)
        {
            sum1 = sum1 + input[i];
        }
        else
        {
            sum2 = sum2 + input[i];
        }
    }
    cout<<sum1<<' '<<sum2<<endl;
    return 0;
}
