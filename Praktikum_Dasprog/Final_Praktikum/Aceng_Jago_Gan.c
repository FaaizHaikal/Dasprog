#include <stdio.h>
#include <math.h>

int prime(int x)
{
    if(x<=1)
        return 0;
    if(x==2||x==3)
        return 1;
    if(x%2==0||x%3==0)
        return 0;
    for(int i=5;i<=sqrt(x);i+=6)
        if(x%i==0 || x%(i+2)==0)
            return 0;
    return 1;
}
int main()
{
    int q;
    scanf("%d", &q);
    struct kode{
        int* x;
        int size;
    };
    struct kode msg[q];
    for(int i=0;i<q;i++){
        int n;
        scanf("%d", &n);
        int ar[n];
        for(int j=0;j<n;j++)
            scanf("%d", &ar[j]);
        msg[i].x = ar;
        printf("%d\n\n", msg[0].x[3]);
        msg[i].size = n;
    }
    for(int i=0;i<q;i++){
        int noprime = 1;
        for(int j=0;j<msg[i].size;j++){
            int temp = msg[0].x[j];
            printf("%d\n", temp);
            if(prime(temp)){
                printf("%d ", temp);
                noprime = 0;
            }
        }
        if(noprime)
            printf("Unable to send Fever Slot Buckle.");
        printf("\n");
    }
}