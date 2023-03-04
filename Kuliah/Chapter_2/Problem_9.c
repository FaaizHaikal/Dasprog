/* Programmer: Faa'iz Haikal Hilmi          Tanggal dibuat: 9 September 2022
 * Dosen: Ir. F.X. Arunanto, M.Sc           Kelas: IF184101
 *
 * Menghitung waktu yang dibutuhkan untuk memotong rumput suatu taman yang 
 * terdapat rumah di dalam taman tersebut */

#include <stdio.h>

#define KECEPATAN 2

int main()
{
    /* Variabel untuk menyimpan data yang dibutuhkan */
    double p_taman, l_taman, p_rumah, l_rumah, waktu, luas_rumput;

    /* Mendapatkan nilai panjang dan lebar dari taman dan rumah */
    printf("Masukkan panjang taman (satuan kaki)> ");
    scanf("%lf", &p_taman);
    printf("Masukkan lebar taman (satuan kaki)> ");
    scanf("%lf", &l_taman);
    printf("Masukkan panjang rumah (satuan kaki)> ");
    scanf("%lf", &p_rumah);
    printf("Masukkan lebar rumah (satuan kaki)> ");
    scanf("%lf", &l_rumah);

    /* Menghitung luas rumput atau selisih dari luas taman dan rumah */
    luas_rumput = (p_taman * l_taman) - (p_rumah * l_rumah);

    /* Menghitung waktu yang dibutuhkan untuk memotong rumput */
    waktu = luas_rumput/KECEPATAN;

    /* Menampilkan waktu yang dibutuhkan untuk memotong rumput */
    printf("Waktu yang dibutuhkan untuk memotong rumput adalah %0.f detik", waktu);
}

