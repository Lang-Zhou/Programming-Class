#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

char str[51],str0[51];
int length;
int i,j = -1,result = 1;

int main()
{
    cin.get(str,50);
    length = strlen(str);
    for (i = 0; i < length; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            j++;
            str0[j] = str[i];
        }
    }
    for (i = 0;i <= j;i++)
    {
        if ((str0[i] != str0[j - i]) && (str0[i] + 32 != str0[j - i]) && (str0[i] != str0[j - i] + 32))
        {
            result = 0;
            break;
        }
    }
    cout<<result<<endl;
    return 0;
}


