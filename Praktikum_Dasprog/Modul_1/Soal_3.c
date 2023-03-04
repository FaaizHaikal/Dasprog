#include <stdio.h>

int main()
{
    int banyak_soal;
    
    int jam;
    int menit;
    int detik;
    scanf("%d", &banyak_soal);
    scanf("%d %d %d", &jam, &menit, &detik);
    int sisa_soal = 25 - banyak_soal;
    int poin_soal = banyak_soal * 4;
    int poin_kurang = -sisa_soal;
    int sisa_detik = 60 - detik;
    int sisa_menit = 54 - menit;
    int sisa_jam = 9 - jam;
    int poin_sisa;
    
    int total_sisa = sisa_jam*3600 + sisa_menit*60 + sisa_detik;

    if(banyak_soal>=5 && total_sisa > 0)
    {
        poin_sisa = total_sisa/450;
        if(sisa_jam>0)
        {
            printf("Owo memiliki sisa waktu sebesar %d jam %d menit %d detik.", sisa_jam, sisa_menit, sisa_detik);
        }
            else if(sisa_jam == 0)
            {
                if(sisa_menit > 0)
                {
                    printf("Owo memiliki sisa waktu sebesar %d menit %d detik.", sisa_menit, sisa_detik);
                }
                    else if(sisa_menit == 0)
                    {
                        printf("Owo memiliki sisa waktu sebesar %d detik.", sisa_detik);
                    }
            }
            else if(total_sisa<0)
            {
                
            }
    }

    int poin_total = poin_soal + poin_sisa + poin_kurang;
    printf("%d", poin_total);

    return 0;
}