#include <stdio.h>
int a,b,x,y;
void solve(const int ar[], int num[x][y], int c);
int main()
{
    scanf("%d%d", &a, &b);
    int c = a*b;
    int ar[c];
    for(int i=0;i<c;i++)
        scanf("%d", &ar[i]);
    scanf("%d%d", &x, &y);
    int num[x][y];
    solve(ar, num, c);
    printf("Baris pertama :\n");
    for(int i=0;i<y;i++)
        printf("%d ", num[0][i]);
    printf("\nBaris terakhir :\n");
    for(int i=0;i<y;i++)
        printf("%d ", num[x-1][i]);
    return 0;
}

void solve(const int ar[], int num[x][y], int c)
{
    int k=0;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++,k++)
        {
            if(k==c)
                k=0;
            num[i][j] = ar[k];
        }
    }
}