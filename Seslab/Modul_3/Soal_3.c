#include <stdio.h>

void ar(int);

int main()
{
    int n;
    scanf("%d", &n);
    ar(n);
}

void ar(int x)
{
    int ar[x];
    int temp;
    for(int i=0;i<x;i++)
    {
        scanf("%d", &ar[i]);
    }
    for(int i=0;i<x;i++)
    {
        for(int j=i+1;j<x;j++)
        {
            if(ar[j]<ar[i])
            {
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    printf("max: %d\n", ar[x-1]);
    printf("min: %d", ar[0]);
}