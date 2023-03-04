#include <stdio.h>
#include <math.h>

int main()
{
    int T;
    scanf("%d", &T);
    int sum[T];
    for(int i=0;i<T;i++)
    {
        int A, B, M, count = 0;
        long long N, j=0;
        scanf("%d%d%lld%d", &A, &B, &N, &M);
        while(j<=N-1)
        {
            int x = (long long)pow(A,j)%M;
            int y = (long long)pow(j,B)%M;
            count += (x*y)%M;
            j++;
        }
        sum[i] = count%M;
    }
    for(int i=0;i<T;i++)
        printf("%d\n", sum[i]);
    return 0;
}