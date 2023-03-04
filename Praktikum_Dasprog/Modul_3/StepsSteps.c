#include <stdio.h>

int solve(int n)
{
    if(n<0)
        return 0;
    else if(n==0)
        return 1;
    else
        return solve(n-3)+solve(n-5)+solve(n-6);
        
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", solve(n));
}