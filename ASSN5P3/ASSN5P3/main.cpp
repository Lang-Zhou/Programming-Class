#include<iostream>
#include<stdio.h>
using namespace std;

int N;
int i,j;

int main()
{
    cin>>N;
    int matrix[N][N];
    for (i = 0;i < N;i++)
    {
        matrix[i][i] = 1;
        matrix[i][0] = 1;
    }
    for (i = 2;i < N;i++)
    {
        for (j = 1;j < i;j++)
            matrix[i][j] = matrix[i - 1][j - 1] + matrix[i - 1][j];
    }
    for (i = 0;i < N;i++)
    {
        for (j = 0;j < i;j++)
            cout<<matrix[i][j]<<' ';
        cout<<matrix[i][i];
        cout<<endl;
    }
}

