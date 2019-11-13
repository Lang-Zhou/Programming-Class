#include<iostream>
#include<stdio.h>
using namespace std;

int N;
int i,k,m,*p;


int main()
{
    cin>>N;
    int peopleIDs[N];
    p = peopleIDs;
    for (i = 0;i < N;i++)
        peopleIDs[i] = i + 1;
    i = 0;
    k = 0;
    m = 0;
    while (m < N - 1)
    {
        if (*(p + i) != 0) k++;
        if (k == 3)
        {
            *(p + i) = 0;
            k = 0;
            m++;
        }
        i++;
        if (i == N) i = 0;
    }
    while (*p == 0) p++;
    cout<<*p;
    return 0;
}
