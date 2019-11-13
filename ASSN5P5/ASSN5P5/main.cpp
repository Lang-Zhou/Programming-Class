#include<iostream>
using namespace std;

int matrix[3][3],temp[3][3];
int i,j;

int main()
{
    for (i = 0;i < 3;i++)
    {
        for (j = 0;j < 3;j++)
        {
            cin>>matrix[i][j];
            temp[i][j] = matrix[i][j];
        }
    }
    for (i = 0;i < 3;i++)
    {
        for (j = 0;j < 3;j++)
            matrix[i][j] = temp[j][i];
    }
    for (i = 0;i < 3;i++)
    {
        for (j = 0;j < 2;j++)
            {
                cout<<matrix[i][j]<<' ';
            }
        cout<<matrix[i][2]<<endl;
    }
    return 0;
}
