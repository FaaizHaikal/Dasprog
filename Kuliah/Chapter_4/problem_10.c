/* Programmer: Faa'iz Haikal Hilmi          Tanggal dibuat: 28 September 2022
 * NRP: 5025221219                          Kelas: Dasar Pemrograman B
 * Dosen: Ir. F.X. Arunanto, M.Sc           
 *
 * Menghitung waktu pembuatan roti */

#include <stdio.h>

#define PRIMARY_KNEADING_WHITE 15
#define PRIMARY_RISING_WHITE 60
#define SECONDARY_KNEADING_WHITE 18
#define SECONDARY_RISING_WHITE 20
#define LOAF_SHAPING_WHITE 1.0/30
#define FINAL_RISING_WHITE 75
#define BAKING_WHITE 45
#define COOLING_WHITE 30

#define PRIMARY_KNEADING_SWEET 20
#define PRIMARY_RISING_SWEET 60
#define SECONDARY_KNEADING_SWEET 33
#define SECONDARY_RISING_SWEET 30
#define LOAF_SHAPING_SWEET 1.0/30
#define FINAL_RISING_SWEET 75
#define BAKING_SWEET 35
#define COOLING_SWEET 30


void instruksi();
double jenis(char jenis_roti);
int ukuran(int ukuran_roti, int manual, double total_waktu);


int main()
{
    int total_waktu;
    char jenis_roti;
    int ukuran_roti;
    int manual;

    instruksi();
    printf("Roti apa yang Anda inginkan, White (W) atau Sweet (S)? ");
    scanf("%c", &jenis_roti);
    printf("Ukuran roti apa yang Anda mau? Reguler (1) atau Double (2)? ");
    scanf("%d", &ukuran_roti);
    printf("Apakah Anda ingin mengkustom manual? Iya (1) atau Tidak (2)? ");
    scanf("%d", &manual);

    total_waktu = jenis(jenis_roti);
    ukuran(ukuran_roti, manual, total_waktu);

}

double jenis(char jenis_roti)
{
    int total_waktu;
    switch(jenis_roti)
    {
        case 'W':
            total_waktu = PRIMARY_RISING_WHITE + PRIMARY_KNEADING_WHITE + 
                          SECONDARY_KNEADING_WHITE + SECONDARY_RISING_WHITE +
                          + LOAF_SHAPING_WHITE;
            break;
        case 'S':
            total_waktu = PRIMARY_RISING_SWEET + PRIMARY_KNEADING_SWEET + 
                          SECONDARY_KNEADING_SWEET + SECONDARY_RISING_SWEET +
                          + LOAF_SHAPING_SWEET;
            break;
        default:
            printf("Tidak ada dalam menu. Pesanan gagal diterima.");
            break;
    }
     
     return total_waktu;
}

int ukuran(int ukuran_roti, int manual, double total_waktu)
{
    switch(ukuran_roti)
    {
        case 1:
            switch(manual)
            {
                case 1:
                    printf("Waktu pembuatan roti adalah %.1f menit. ", total_waktu);
                    printf("Silahkan Anda kustom adonannya sesuai selera.");
                    return 0;
                case 2:
                    total_waktu += FINAL_RISING_WHITE + BAKING_WHITE + COOLING_WHITE;
                    printf("Waktu pembuatan roti adalah %.1f menit", total_waktu);
                    return 0;
                default:
                    printf("Tidak ada dalam menu. Pesanan gagal diterima.");    
                    return 0;      
            }
        case 2:
            switch(manual)
            {
                case 1:
                    printf("Waktu pembuatan roti adalah %.1f menit", total_waktu);
                    printf("Silahkan Anda kustom adonannya sesuai selera.");
                    return 0;
                case 2:
                    total_waktu = FINAL_RISING_WHITE + BAKING_WHITE + COOLING_WHITE;
                    total_waktu *= 2;
                    printf("Waktu pembuatan roti adalah %.1f menit", total_waktu);
                    return 0; 
                default:
                    printf("Tidak ada dalam menu. Pesanan gagal diterima.");
                    return 0;         
            }
        default:
            printf("Tidak ada dalam menu. Pesanan gagal diterima.");
            return 0;
    }
}

void instruksi()
{
    printf("Program ini menghitung dan menampilkan waktu pembuatan roti.\n");
    printf("Masukkan pilihan yang Anda inginkan menggunakan huruf besar pada tiap pilihan\n");
    printf("Tekan <ENTER> setelah setiap kali mengetik pilihan\n");
}