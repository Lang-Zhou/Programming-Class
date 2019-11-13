#include<iostream>
using namespace std;

int matrix[3][3];
int i,j,sum[3] = {0,0,0};

int main()
{
    for (i = 0;i < 3;i++)
    {
        for (j = 0;j < 3;j++)
        {
            cin>>matrix[i][j];
        }
    }
    for (i = 0;i < 3;i++)
    {
        for (j = 0;j < 3;j++)
        {
            sum[i] = sum[i] + matrix[i][j];
        }
    }
    for (i = 0;i < 2;i++)
    {
        cout<<sum[i]<<' ';
    }
    cout<<sum[2]<<endl;
    return 0;
}
