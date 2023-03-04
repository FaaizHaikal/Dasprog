#include <stdio.h>
int barisan(int);
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", barisan(n));
}

int barisan(int x)
{
    if(x==1)
        return 1;
    else
        return x*x + barisan(x-1);
}