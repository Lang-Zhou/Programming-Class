#include<iostream>
#include<stdio.h>
using namespace std;

int a[100] = {0};
int minimum,maximum = 0;
int i,j,temp;
int N,n;

int main()
{
    cin>>N;
    for (i = 0;i <= N - 1;i++)
    cin>>a[i];
    for (i = 0;i <= N - 1;i++)
    {
        minimum = i;
        for (j = i + 1;j <= N - 1; j++)
        {if (a[j] < a[minimum]) minimum = j;}
        if (i != minimum)
        {
            temp = a[i];
            a[i] = a[minimum];
            a[minimum] = temp;
        }
    }
    n = N/2;
    for (i = 0;i <= N - 1;i = i + 2)
        maximum = maximum + a[i];
    cout<<maximum;
    return 0;
}
