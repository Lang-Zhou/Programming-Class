#define N 20
#include<iostream>
#include<stdio.h>
#include <string.h>
using namespace std;
int main()
{
    int m,i,j = 0;
    char b[N];
    cin>>m;
    string input;
    cin>>input;
    j = input.length();
    for (i = 0;i < j - m; i++)
    {
        b[i] = input[i + m];
    }
    for (i = 0;i < m;i++)
        b[j - m + i] = input[i];
    for (i = 0;i < j;i++)
        cout<<b[i];
    return 0;
}
