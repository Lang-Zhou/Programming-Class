#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i,j;
    gets(a);
    j = strlen(a);
    for (i = 0;i < j;i++)
    {
        if((a[i] >= 'a' && a[i] <= 'x') || (a[i] >= 'A' && a[i] <= 'X'))
    {
        printf("%c",a[i] + 2);
    }
    else if (a[i] == 'y')
    {
        printf("a");
    }
    else if (a[i] == 'z')
    {
        printf("b");
    }
    else if (a[i] == 'Y')
    {
        printf("A");
    }
    else if (a[i] == 'Z')
    {
        printf("B");
    }
    else
    {
        printf("%c",a[i]);
    }
    }
    return 0;
}
