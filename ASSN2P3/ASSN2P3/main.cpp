#include<iostream>
#include<stdio.h>
using namespace std;
int gcd(int a,int b)
{
    int i,j,r1;
    if (a>=b) j=a;
    else j=b;
    for (i=1;i<=j;i++)
    {if (a%i==0 && b%i==0) r1 = i;}
    return r1;
}
int lcm(int a,int b)
{
    int i,j,r2;
    if (a>=b) j=a;
    else j=b;
    for (i=j;i>=j;i++)
    {if (i%a==0 && i%b==0) {r2 = i;break;}}
    return r2;
}

int main()
{
    int m,n,p;
    int result1,result2;
    scanf("%d%d%d",&m,&n,&p);
    result1 = gcd(p,gcd(m,n));
    result2 = lcm(p,lcm(m,n));
    cout<<result1<<' '<<result2<<endl;
    return 0;
}
