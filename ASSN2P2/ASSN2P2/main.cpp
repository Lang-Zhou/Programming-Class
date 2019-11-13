#include <iostream>
using namespace std;
void reverse(int x)
{
    printf("%d",x%10);
    x = x/10;
    if (x>0)
        reverse(x);
}
int main(void)
{
    int num;
    cin>>num;
    reverse(num);
    return 0;
}
