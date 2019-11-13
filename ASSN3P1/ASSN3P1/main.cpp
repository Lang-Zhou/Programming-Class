#include<stdio.h>
#include<iostream>
using namespace std;
int century,year,month,day;
int lyear;
long weekday;

int main()
{
    scanf("%d%d%d",&year,&month,&day);
    if (month == 1 || month == 2)
    {   year = year - 1;
        month = month + 12;
    }
    century = year/100;
    lyear = year - (year/100)*100;
    weekday = lyear + int(lyear/4) + int(century/4) - 2*century + int((26*(month+1))/10) + day - 1;
    weekday = weekday % 7;
    switch(weekday)
    {
        case 0: cout<<"Sunday"; break;
        case 1: cout<<"Monday"; break;
        case 2: cout<<"Tuesday"; break;
        case 3: cout<<"Wednesday"; break;
        case 4: cout<<"Thursday"; break;
        case 5: cout<<"Friday"; break;
        case 6: cout<<"Saturday"; break;
    }
    return 0;
}
