#include<iostream>
#include<stdio.h>
using namespace std;

int i;
int mini, maxi,temp;

int main()
{
    int number[10];
    for (i = 0;i < 10;i++)
        cin>>number[i];
    mini = maxi = 0;
    for (i = 1;i < 10;i++)
    {
        if (number[i] < number[mini]) mini = i;
    }
    temp = number[0];
    number[0] = number[mini];
    number[mini] = temp;
    for (i = 1;i < 10;i++)
    {
        if (number[i] > number[maxi]) maxi = i;
    }
    temp = number[9];
    number[9] = number[maxi];
    number[maxi] = temp;
    for (i = 0;i < 10;i++)
        cout<<number[i]<<' ';
    cout<<endl;
    return 0;
}
