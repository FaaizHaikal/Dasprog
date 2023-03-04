/* Programmer: Faa'iz Haikal Hilmi          Tanggal dibuat: 8 September 2022
 * Dosen: Ir. F.X. Arunanto, M.Sc           Kelas: IF184101
 *
 * Menghitung dan menampilkan volume infus yang akan diberikan pada pasien
 * dan kecepatan rata-rata infus per jam */

#include <stdio.h>

int main()
{
    /* Menyiapkan variabel untuk menyimpan data yang dibutuhkan */
    double vbti, waktu, rate;

    /* Mendapatkan nilai vbti dan menit dari pengguna */
    printf("Masukkan volume infus yang akan diberikan> ");
    scanf("%lf", &vbti);
    printf("Masukkan lamanya waktu penginfusan (menit)> ");
    scanf("%lf", &waktu);

    /* Mengkonversikan waktu penginfusan ke dalam bentuk jam */
    waktu /= 60;

    /* Menghitung kecepatan rata-rata pemberian infus */
    rate = vbti/waktu;

    /* Menampilkan volume infus dan kecepatan rata-rata pemberian infus */
    printf("Volume infus yang akan diberikan: %f ml\n", vbti);
    printf("Kecepatan rata-rata pemberian infus: %f ml/jam", rate);

    return 0;
}

