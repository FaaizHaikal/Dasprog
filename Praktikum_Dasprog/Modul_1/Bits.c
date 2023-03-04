#include <stdio.h>

int main()
{
    int n, k;
	scanf("%d%d", &n, &k);
    int x = (n&(1<<k-1))>>(k-1);

    printf("%d",x);

    return 0;
}