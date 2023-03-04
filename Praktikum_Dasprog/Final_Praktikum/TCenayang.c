#include <stdio.h>
#include <string.h>
struct orang{
        char nama[50], telp[50];
        int umur;
    };
    struct data{
        char kota[50];
        int jumlah_orang;
    };
    struct teman{
        char teman1[50], teman2[50];
    };

int main()
{
    int n;
    scanf("%d", &n);
    int jumlah_teman;

    struct data data_ke[n];
    for(int i=0;i<n;i++){
        scanf("%s", data_ke[i].kota);
        scanf("%d", &data_ke[i].jumlah_orang);
        
    }
}
    