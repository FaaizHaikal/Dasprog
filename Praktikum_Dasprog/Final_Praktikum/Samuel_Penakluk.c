#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &x);
        if(x%2==0)
            ar[i]  = 2 * x - 1;
        else
            ar[i] = 2 * x + 1;
    }
    for(int i=0;i<n;i++)
        printf("%d\n", ar[i]);

    return 0;
}