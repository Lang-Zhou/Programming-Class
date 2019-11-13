#include <iostream>
int isprime(int x)
{
    int i;
    int j = 0;
    for (i = 2;i<=x;i++)
    {if (x%i == 0)
        j++;}
    if (j == 1)
    return 1;
    else return 0;
}

int main()
{
    int n;
    int i;
    int j = 0;
    scanf("%d",&n);
    if(n==2) printf("%4d",2);
    if(n>2){
        printf("%4d",2);
        j++;
    }
    for (i=3;i<=n;i+=2)
        if (isprime(i)==1)
        {
            printf("%4d",i);
            j++;
            if (j%5 == 0 && j!=0)
                printf("\n");
            else printf(" ");
        }
    return 0;
}
