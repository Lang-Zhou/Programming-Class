#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

string str1,str2;
int i,k = 0;
int length1,length2;

int main()
{
    cin>>str1;
    cin>>str2;
    length1 = str1.size();
    length2 = str2.size();
    for (i = 0;i < length1;i = i + 2)
    {
        cout<<str1[i];
    }
    k = 0;
    for (i = 1;i < length2;i = i + 2)
    {
        cout<<str2[i];
    }
    return 0;
}
