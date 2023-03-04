/* Programmer: Faa'iz Haikal Hilmi          Tanggal dibuat: 9 September 2022
 * Dosen: Ir. F.X. Arunanto, M.Sc           Kelas: IF184101
 *
 * Menghitung jumlah grup yang dibutuhkan dan jumlah siswa tersisa
 * dari total jumlah siswa terdaftar pada suatu insitusi akademik */

#include <stdio.h>

#define JUMLAH_PER_GRUP 30

int main()
{
    /* Variabel untuk menyimpan data yang dibutuhkan */
    int siswa, grup, residu;

    /* Mendapatkan jumlah siswa yang terdaftar */
    printf("Masukkan jumlah siswa yang terdaftar> ");
    scanf("%d", &siswa);

    /* Menghitung jumlah grup yang diperlukan dan
     * jumlah siswa yang tidak mendapat grup */
    grup = siswa/JUMLAH_PER_GRUP;
    residu = siswa%JUMLAH_PER_GRUP;

    /* Menampilkan jumlah grup yang dibutuhkan dan 
     * jumlah siswa yang tidak mendapat grup */
    printf("Dari %d siswa yang terdaftar, dibutuhkan sebanyak %d grup"
    " dan terdapat %d siswa yang tidak mendapat grup", siswa, grup, residu);
}

