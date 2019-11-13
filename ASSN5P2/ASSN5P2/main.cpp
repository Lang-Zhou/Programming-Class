#include<iostream>
#include<stdio.h>
using namespace std;

int m,n;
int i,j,k,q;

int main()
{
    cin>>m>>n;
    int matrix[m][n];
    for (i = 0;i < m;i++)
    {
        for (j = 0;j < n;j++)
            cin>>matrix[i][j];
    }
    for (i = 0;i < m;i++)
    {
        for (j = 0;j < n;j++)
        {
            if (matrix[i][j] == 0)
            {
                for (k = 0;k < m;k++)
                {
                    if (matrix[k][j] != 0) matrix[k][j] = '*';
                }
                for (q = 0;q < n;q++)
                {
                    if (matrix[i][q] != 0) matrix[i][q] = '*';
                }
            }
        }
    }
    for (i = 0;i < m;i++)
    {
        for (j = 0;j < n;j++)
        {
            if (matrix[i][j] == '*') matrix[i][j] = 0;
        }
    }
    for (i = 0;i < m;i++)
    {
        for (j = 0;j < n - 1;j++)
        {
            cout<<matrix[i][j]<<' ';
        }
        cout<<matrix[i][n - 1]<<endl;
    }
}
