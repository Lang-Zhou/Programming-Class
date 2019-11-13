#include<iostream>
#include<stdio.h>
using namespace std;

int maximum,i,j;
int a[3][4];

int main()
{
    for (i = 0;i <= 2;i++)
    {
        for (j = 0;j <= 3;j++)
            cin>>a[i][j];
    }
    maximum = a[0][0];
    for (i = 0;i <= 2;i++)
    {
        for (j = 0;j <= 3;j++)
            {
                if (maximum < a[i][j]) maximum = a[i][j];
            }
    }
    cout<<maximum;
    return 0;
}
