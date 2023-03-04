#include <stdio.h>
#define ll long long

ll solveBase(const ll num[], const ll base[], int x)
{
    
    for(int i=0;i<x;i++)
    {
        if(num[i]==0)
            return 0;
        else
            new_num[i] = num[i]%base[i]+10*solveBase(num[i]/base[i], base[i], x);
    }
}

bool palindrom(ll x)
{

}
int main()
{
    ll num[100000], base[100000];
    int i=0;
    while(scanf("%d%d", &num[i], &base[i])!=EOF)
    {
        scanf("%d%d", &num[++i], &base[++i]);
    }
    int x = sizeof(num)/sizeof(num[0]);
    ll new_num[x];
}