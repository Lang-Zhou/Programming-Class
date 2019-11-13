#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    void sort(char *[]);
    int i;
    char *p[6],str[6][20];
    for (i = 0;i < 6;i++)
        p[i]=str[i];
    for (i = 0;i < 6;i++)
        cin>>p[i];
    sort(p);
    for (i = 0;i < 6;i++)
        cout<<p[i]<<endl;
    return 0;
}

void sort(char *s[])
{
    int i,j;
    char *temp;
    for (i = 0;i < 5;i++)
    {
        for (j = 0;j < 5 - i;j++)
        {
            if (strcmp(*(s + j),*(s + j + 1)) > 0)
                {
                    temp = *(s + j);
                    *(s + j) = *(s + j + 1);
                    *(s + j + 1) = temp;
                }
        }
    }
}
