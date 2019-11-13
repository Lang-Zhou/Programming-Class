#include<iostream>
#include<stdio.h>
using namespace std;

int orgrow,orgcol,col,row;
int i,j;

int main()
{
    scanf("%d%d%d%d",&orgrow,&orgcol,&row,&col);
    int orgmatrix[orgrow][orgcol];
    for (i = 0;i < orgrow;i++)
    {
        for (j = 0;j < orgcol;j++)
            cin>>orgmatrix[i][j];
    }
    if (orgcol*orgrow != col*row)
    {
        for (i = 0;i < orgrow;i++)
        {
            for (j = 0;j < orgcol - 1;j++)
            {
                cout<<orgmatrix[i][j]<<' ';
            }
            cout<<orgmatrix[i][orgcol - 1]<<endl;
        }
    }
    else
    {
        int data[orgcol*orgrow];
        int n = 0;
        int matrix[row][col];
        for (i = 0;i < orgrow;i++)
        {
            for (j = 0;j < orgcol;j++)
            {
                data[n] = orgmatrix[i][j];
                n++;
            }
        }
        n = 0;
        for (i = 0;i < row;i++)
        {
            for (j = 0;j < col;j++)
            {
                matrix[i][j] = data[n];
                n++;
            }
        }
        for (i = 0;i < row;i++)
        {
            for (j = 0;j < col - 1;j++)
            {
                cout<<matrix[i][j]<<' ';
            }
            cout<<matrix[i][col - 1]<<endl;
        }
    }
    return 0;
}

