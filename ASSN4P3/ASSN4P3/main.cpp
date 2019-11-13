#include<iostream>
#include<stdio.h>
using namespace std;

int n;
int i,j,k,l,m;

int main()
{
    cin>>n;
    int matrix[n][n];
    for (i = 0;i <= n/2 - 1;i++)
    {
        for (j = i;j <= n - i - 1;j++) matrix[i][j] = (4*i+2)*n - 4*i*i - 5*i - 1 + j;
        for (k = i;k <= n - i - 1;k++) matrix[k][i] = (4*i+2)*n - 4*i*i - 3*i - 1 - k;
        for (m = i;m <= n - i - 1;m++) matrix[n - i -1][m] = (4*i + 1)*n - 4*i*i - i - m;
        for (l = i;l <= n - i - 2;l++) matrix[l][n - i - 1] = (4*i + 3)*n - 4*i*i - 7*i - 2 + l;
    }
    if (n % 2 != 0) matrix[n/2][n/2] = n*n;
    matrix[n - 1][n - 1] = 1;
    for (i = 0;i <= n - 1;i++)
    {
        for (j = 0;j <= n - 2;j++)
            {cout<<matrix[i][j]<<' ';}
        cout<<matrix[i][n - 1]<<endl;
    }
}
