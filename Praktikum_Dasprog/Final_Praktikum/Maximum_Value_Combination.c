#include <stdio.h>
#include <math.h>
int max(int a, int b)
{
    if(a<b)
        a = b;
    return a;
}
int delete(long long int n, int x, int counter)
{
    int something = n;
    for(int i=0;i<counter;i++)
    {
        if((something%10) == x)
            n -= x*pow(10,i);
        something/=10;
    }
    return n;
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    int r;
    
    scanf("%d", &r);
    long long int ans = 0;
    for(int i=0;i<r;i++){
        long long int j = n;
        int counter = 0;
        int x = 0;
        while(j>0)
        {
            int k = j%10;
            x = max(x, k);
            ++counter;
            j/=10;
        }
        n = delete(n, x, counter);
        ans += x * pow(10, r-i-1);
    }
    printf("%lld", ans);
}

