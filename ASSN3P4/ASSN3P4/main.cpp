#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int x,y,z;
int length = 0;
int result;
int main()
{
    scanf("%d%d",&x,&y);
    z = y;
    while (z != 0)
    {
        z = z/10;
        length++;
    }
    result = x*pow(10,length) + y;
    cout<<result;
    return 0;
}
