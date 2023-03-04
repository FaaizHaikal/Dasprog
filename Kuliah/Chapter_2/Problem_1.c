/* Programmer: Faa'iz Haikal Hilmi          Tanggal dibuat: 8 September 2022
 * Dosen: Ir. F.X. Arunanto, M.Sc           Kelas: IF184101
 *
 * Menghitung dan menampilkan jarak perjalanan yang dilalui dan tarif perjalanan taksi*/

#include <stdio.h>

int main()
{
    /* Variabel untuk menyimpan data pembacaan odometer awal dan akhir, jarak, dan tarif perjalanan */
    double awal, akhir, jarak, tarif;
    
    /* Mendapatkan nilai pembacaan odometer awal dari pengguna */
    printf("Masukkan pembacaan odometer awal> ");
    scanf("%lf", &awal);

    /* Mendapatkan nilai pembacaan odometer akhir dari pengguna */
    printf("Masukkan pembacaan odometer akhir> ");
    scanf("%lf", &akhir);

    /* Menghitung nilai jarak yang ditempuh dan tarif perjalanan */
    jarak = akhir-awal;
    tarif = jarak*1.50;

    /* Menampilkan hasil jarak perjalanan yang ditempuh oleh pengguna dan tarif perjalanannya */
    printf("Anda melakukan perjalanan sejauh %0.1f mil. Dengan biaya $1.50 per mil, tarif Anda adalah $%0.1f", jarak, tarif);

    return 0;
}