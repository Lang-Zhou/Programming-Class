#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

char a[10000000];
int i,j;

int main()
{
    cin>>a;
    j = strlen(a);
    a[1] = a[2];
    a[2] = a[3];
    a[3] = a[4];
    a[4] = a[6];
    for (i = 5;i <= j - 3;i++)
        a[i] = a[i + 2];
    for (i = 0;i <= j - 3;i++)
        cout<<a[i];
    return 0;
}
