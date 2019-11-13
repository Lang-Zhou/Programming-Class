#include<iostream>
#include<stdio.h>
using namespace std;
int input[100];
int i,k,m = 0;
int sum = 0;
int main()
{
    for (k = 0;k <= 100;k++)
    {
        scanf("%d",&input[k]);
        m = m + 1;
        if (getchar() == EOF) break;
    }
    for (i = 0;i <= m - 2;i++)
    {if (input[i] != input[i+1])
    {sum = sum + 1;
    }
    else sum = sum;
        }
    if (input[m-1] == 0) sum = sum + 1;
    cout<<sum;

}
