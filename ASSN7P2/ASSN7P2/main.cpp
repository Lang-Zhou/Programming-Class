#include<iostream>
#include<string.h>
using namespace std;

char str1[51],str2[51],str3[51];
int i,sum = 0;
int len1,len2,len3,len;

int minimum(int x,int y)
{
    if (x >= y) return y;
    else return x;
}

int main()
{
    cin>>str1;
    cin>>str2;
    cin>>str3;
    len1 = strlen(str1);
    len2 = strlen(str2);
    len3 = strlen(str3);
    len = minimum(minimum(len1,len2),len3);
    for (i = 0;i < len;i++)
    {
        if ((str1[i] == str2[i]) && (str2[i] == str3[i]))
        {
            sum++;
        }
        else break;
    }
    if (sum == 0)
    {
        cout<<"NONEXISTENT"<<endl;
    }
    else
    {
        for (i = 0;i < sum;i++)
        {
            cout<<str1[i];
        }
    }
}
