#include<iostream>
#include<stdio.h>
using namespace std;

int a[3][3],b[3][3],c;
int i,j;
int sum1,sum2,sum3,sum4;
int deta,detb;

int main()
{
    for (i = 0;i < 3;i++)
    {
        for (j = 0;j < 3;j++)
            cin>>a[i][j];
    }
    i = 0;
    j = 0;
    for (i = 0;i < 3;i++)
    {
        for (j = 0;j < 3;j++)
            cin>>b[i][j];
    }
    sum1 = a[0][2]*a[1][0]*a[2][1]+a[0][1]*a[1][2]*a[2][0]+a[0][0]*a[1][1]*a[2][2];
    sum2 = a[2][2]*a[0][1]*a[1][0]+a[2][1]*a[1][2]*a[0][0]+a[0][2]*a[1][1]*a[2][0];
    sum3 = b[0][2]*b[1][0]*b[2][1]+b[0][1]*b[1][2]*b[2][0]+b[0][0]*b[1][1]*b[2][2];
    sum4 = b[2][2]*b[0][1]*b[1][0]+b[2][1]*b[1][2]*b[0][0]+b[0][2]*b[1][1]*b[2][0];
    deta = sum1 - sum2;
    detb = sum3 - sum4;
    c = deta*detb;
    cout<<c<<endl;
}
