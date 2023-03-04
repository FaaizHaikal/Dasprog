#include <stdio.h>
#include <string.h>
int main()
{
    int saldo;
    int kegiatan;
    scanf("%d%d", &saldo, &kegiatan);
    int sum=0;
    char isBerguna[6];
    int biaya;
    int sum_biaya=0;
    int poin;
    for(int i=0;i<kegiatan;i++)
    {
        scanf("%s %d", isBerguna, &biaya);
        if(biaya<=100000)
            poin = 1;
        else if(biaya<=500000)
            poin = 5;
        else if(biaya<=10000000)
            poin = 20;
        else if(biaya<=500000000)
            poin = 35;
        else
            poin = 50;
        if(strcmp(isBerguna, "Tidak")==0)
            poin *= -1;
        sum += poin;
        sum_biaya += biaya;
    }
    if(sum>0 && saldo > sum_biaya)
        printf("Ujana berakhir bahagia.");
    else if(sum==0 && saldo > sum_biaya)
        printf("Ujana berakhir b aja.");
    else
        printf("Ujana tidak berakhir bahagia.");
}