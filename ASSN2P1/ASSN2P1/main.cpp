#include <iostream>
#include<stdio.h>
using namespace std;
int factor(int x)
{
    int i=1;
    int result = 1;
    if (x != 0)
    {for(i=1;i<=x;i++)
    {result = result*i;}}
    else result = 1;
    return result;
}
int main()
{
    int n1,n2,n3;
    int factorsum = 0;
    scanf("%d%d%d",&n1,&n2,&n3);
    factorsum = factor(n1)+factor(n2)+factor(n3);
    cout<<factorsum;
    return 0;
}
