#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<math.h>
using namespace std;

int grade[10];
int i = 0,j,temp,minimum,endn;
double sum = 0,average,outputaverage;

int main()
{
    for(i = 0;i <= 9;i++)
    scanf ("%d",&grade[i]);
    for (i = 0;i <= 9;i++)
    {
        minimum  = i;
        for (j = i + 1;j <= 9;j++)
        {
            if (grade[j] < grade[minimum])
                minimum = j;
        }
        if (i != minimum)
        {
            temp = grade[i];
            grade[i] = grade[minimum];
            grade[minimum] = temp;
        }
    }
    for (i = 1;i <= 8;i++)
    sum = sum + grade[i];
        
    average = sum/8;
    endn = (average - floor(average))*1000;
    switch (endn)
    {
        case 125: cout<<floor(average) + 0.13<<endl; break;
        case 250: cout<<average; break;
        case 375: cout<<floor(average) + 0.38<<endl; break;
        case 500: cout<<setiosflags(ios::fixed)<<setprecision(2)<<average<<endl; break;
        case 625: cout<<floor(average) + 0.63<<endl; break;
        case 750: cout<<average; break;
        case 875: cout<<floor(average) + 0.88<<endl; break;
        case 0: cout<<setiosflags(ios::fixed)<<setprecision(2)<<average<<endl; break;
    }
}
