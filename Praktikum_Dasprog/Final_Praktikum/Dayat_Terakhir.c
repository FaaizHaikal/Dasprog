#include <stdio.h>

int main()
{
    struct list{
        int* x;
        int y;
    }num[1000];
    int i = 0;
    int iter[1000];
    while(1){
        scanf("%d", &iter[i]);
        int a = iter[i];
        int *z;
        if(a!=0){
            int ar[a];
            int temp, count = 0;
            for(int j=0;j<a;j++)
                scanf("%d", &ar[j]);
            for(int j=0;j<iter[i];j++){
                for(int k=j+1;k<a;k++){
                    if(ar[k] < ar[j]){
                        temp = ar[j];
                        ar[j] = ar[k];
                        ar[k] = temp;
                        ++count; 
                    }
                }
            }
            num[i].x = ar;
            num[i].y = count;
            ++i;
        }
        else
            break;
    }
    int j = 0;
    while(1){
        int a = iter[j];
        if(a!=0){
            printf("Minimal lakukan %d pertukaran\n", num[j].y);
            for(int k=0;k<a;k++){
                printf("%d\n", num[j].x[k]);
            }
            ++j;
        }
        else
            break;
    }
    return 0;
}