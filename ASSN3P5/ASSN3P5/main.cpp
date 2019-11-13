#include<iostream>
#include<string>
#include<math.h>
using namespace std;
  
int main()
{
    string hex;
    int i=0,sum;
    while(getline(cin,hex))
    {
        int count = hex.length();
        sum=0;
        for(i = count-1;i>=0;i--)
        {
            if(hex[i]>='0' && hex[i]<='9')
            {
                sum += (hex[i] - 48)*pow(16,count - i - 1);
            }
            else if(hex[i] >= 'A' && hex[i] <= 'F')
            {
                sum += (hex[i] - 55)*pow(16,count - i - 1);
            }
        }
        cout<<sum;
    }
}
