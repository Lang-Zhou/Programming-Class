#include<iostream>
using namespace std;

int matrix[2][3];
int i,j;
int maxi,maxc,maxr;

int main()
{
    for (i = 0;i < 2;i++)
    {
        for (j = 0;j < 3;j++)
            cin>>matrix[i][j];
    }
    maxi = matrix[0][0];
    maxc = 0;
    maxr = 0;
    for (i = 0;i < 2;i++)
    {
        for (j = 0;j < 3;j++)
        {
            if (matrix[i][j] > maxi)
            {
                maxi = matrix[i][j];
                maxc = i;
                maxr = j;
            }
        }
    }
    cout<<maxi<<' '<<maxc<<' '<<maxr<<endl;
    return 0;
}
