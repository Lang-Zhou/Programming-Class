#include<stdio.h>
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

float a,b,c;
float delta;
double x1,x2;
double rp,ip;

int main()
{
    scanf("%f%f%f",&a,&b,&c);
    delta = b*b - 4*a*c;
    if (a == 0)
    {x1 = -c/b; cout<<setiosflags(ios::fixed)<<setprecision(1)<<x1<<endl;}
    else
    {if (delta == 0) {x1 = -b/(2*a);cout<<setiosflags(ios::fixed)<<setprecision(1)<<x1<<endl;}
        if (delta > 0)
        {x1 = (-b - sqrt(delta))/(2*a);
         x2 = (-b + sqrt(delta))/(2*a);
            if (fabs(x1) > fabs(x2)) cout<<setiosflags(ios::fixed)<<setprecision(1)<<x2<<", "<<x1<<endl;
            if (fabs(x1) < fabs(x2)) cout<<setiosflags(ios::fixed)<<setprecision(1)<<x1<<", "<<x2<<endl;
        }
        if (delta < 0)
        {rp = double(-b/(2*a));
         ip = double(sqrt(-delta)/(2*a));
            if (ip > 0) cout<<setiosflags(ios::fixed)<<setprecision(1)<<rp<<"+"<<ip<<"i, "<<rp<<"-"<<ip<<"i"<<endl;
            if (ip < 0) {ip = -ip;cout<<setiosflags(ios::fixed)<<setprecision(1)<<rp<<"+"<<ip<<"i, "<<rp<<"-"<<ip<<"i"<<endl;}
    }
}
}
