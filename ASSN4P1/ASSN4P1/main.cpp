#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int k;
double N;

int factorial(int x)
{
    int result = 1,i;
    for (i = 1;i <= x;i++)
    result = result*i;
    return result;
}

int combination(int x,int y)
{
    int comb;
    if (x == y || y == 0)
        return 1;
    else
    {comb = factorial(x)/(factorial(y)*factorial(x-y));
        return comb;}
    
}

int main()
{
    int result = 0,i;
    cin>>k;
    N = pow(10,k);
    for (i = 1;i <= k;i++)
        result = result + combination(k,i)*pow(9,k - i);
    cout<<result;
    return 0;
    
}
