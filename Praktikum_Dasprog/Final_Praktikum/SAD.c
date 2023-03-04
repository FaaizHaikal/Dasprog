#include <stdio.h>
#define A 15
#define B 11
int solve(int x){
    if(x<A)
        return 0;
    else if((x%A==0) || (x%B==0))
        return 1;
    else
        return solve(x-A)+solve(x-B);
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n], check[n];
    for(int i=0;i<n;i++){
        scanf("%d", &ar[i]);
        check[i] = solve(ar[i]);
    }
    for(int i=0;i<n;i++){
        if(check[i]>0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}