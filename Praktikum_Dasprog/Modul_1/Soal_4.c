#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int x;
    double y;
    scanf("%d", &n);
    x = log2(n);
    y = log2(n);

    if(x - y == 0)
    {
        printf("Ya");
    }
    else{
        printf("Tidak");

    }
    return 0;
}