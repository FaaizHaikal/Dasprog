/* Programmer: Faa'iz Haikal Hilmi          Tanggal dibuat: 9 September 2022
 * Dosen: Ir. F.X. Arunanto, M.Sc           Kelas: IF184101
 *
 * Menghitung dan menampilkan tingkat panas British Thermal Unit (BTU) yang dihasilkan suatu rumah
 * berdasarkan jumlah galon minyak dan efisiensi tungku yang digunakan*/

#include <stdio.h>

#define BAREL_PER_GALON 42
#define BTU_PER_BAREL 5800000

int main()
{
    /* Variabel untuk menyimpan data yang dibutuhkan */
    double galon, efisiensi, barel, btu;

    /* Mendapatkan jumlah galon dan efisiensi */
    printf("Masukkan jumlah galon minyak yang digunakan> ");
    scanf("%lf", &galon);
    printf("Masukkan persentase efisiensi tungku minyak> ");
    scanf("%lf",  &efisiensi);

    /* Mengkonversikan jumlah galon menjadi satuan barel */
    barel = galon/BAREL_PER_GALON;

    /* Menghitung nilai BTU yang dihasilkan */
    btu = barel * (efisiensi/100) * BTU_PER_BAREL;

    /* Menampilkan hasil BTU */
    printf("Untuk penggunaan minyak sebanyak %0.lf galon dan tungku minyak rumah dengan efisiensi %0.f%%,"
        " dihasilkan tingkat panas sebesar %f BTU.", galon, efisiensi, btu);
}