#include <stdio.h>
#include <string.h>

int solve(int a, int b, char flag[]);

int main(){
    int t, num;
    char flag[32];
    scanf("%d%d", &t, &num);
    for(int i=0;i<t;i++){
        int change, orig, count = 0;
        char start = '0';
        memset(flag, '0', sizeof(flag));
        scanf("%d%d", &change, &orig);
        change-=1;
        if(change>=0)
            num = num ^ 1 << change;
        solve(num^orig, 0, flag);
        for(int j=0;j<strlen(flag);j++){
            if(flag[j]=='1' && flag[j] != start)
                count++;
            start = flag[j];
        }
        num = orig;
        printf("%d\n", count);
    }
}

int solve(int a, int b, char flag[]){
    char identifier;
    int divider = a%2;
    if(a==0)
        return 0;
    else
        identifier = '0' + divider;
    a/=2;
    solve(a, b+1, flag);
    flag[b] = identifier;
    return 0;
}