#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int length1,length2;
int i = 0,k = 0,j = 0,n = 0,s = 0,sum = 0;

int main()
{
    char str[51];
    gets(str);
    length1 = strlen(str);
    char substr[51];
    gets(substr);
    length2 = strlen(substr);
    for (i = 0;i <= length1 - length2;i++)
    {
        n = i;
        k = 0;
        s = 0;
        for (j = 0;j < length2;j++)
        {
            if (str[n] == substr[k])
            {
                n++;
                k++;
                s++;
            }
            else
            {
                break;
            }
        }
        if (s == length2)
        {
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}
