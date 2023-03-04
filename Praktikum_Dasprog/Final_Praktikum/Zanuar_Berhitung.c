#include <stdio.h>
#include <math.h>
#define MODULO 1000000007
int main(){
    long long n, k, ans = 1, sum = 0;
    int x;
    scanf("%lld%lld", &n, &k);
    for(int i=0;i<n;i++){
        int index = i;
        int looper = n;
        while(looper>0){
            x = index % looper;
            index = looper;
            looper = x;
        }
        while(index>0){
            ans = (k*(ans%MODULO))%MODULO;
            index-=1;
        }
        sum += ans;
        sum %= MODULO;
        ans = 1;
    }
    sum %= MODULO;
    long long flag;
    for(int i=1;i<MODULO;i++)
        if((i*n)%MODULO==1)
            flag = i;
    printf("%lld", (flag*sum)%MODULO);

}