/* Programmer: Faa'iz Haikal Hilmi          Tanggal dibuat: 27 September 2022
 * NRP: 5025221219                          Kelas: Dasar Pemrograman B
 * Dosen: Ir. F.X. Arunanto, M.Sc           
 *
 * Menentukan pesan layanan servis kendaraan berdasarkan pilihan 
 * pengguna dan jarak mil kendaraan yang telah ditempuh  */

#include <stdio.h>      /* definisi printf dan scanf */
#include <conio.h>

int main()
{
    double mil;       /* input - jarak mil yang ditempuh kendaraan */
    int layanan;      /* input - layanan servis yang diinginkan */
    
    /* Mendapatkan pilihan layanan dan jarak mil */
    printf("(1) Layanan servis gratis yang pertama\n");
    printf("(2) Layanan servis gratis yang kedua\n");

    printf("Masukkan angka layanan servis yang Anda inginkan> ");
    scanf("%d", &layanan);
    printf("Masukkan jarak tempuh mil kendaraan> ");
    scanf("%lf", &mil);
    /* Percabangan berdasarkan pilihan */
		
    switch(layanan)
    {
        /* Jika pilihan adalah 1 */
        case 1:
            /* Jika 1500 < mil dan mil <= 3000
				Kendaraan Anda harus diservis */
            if(1500 < mil && mil <= 3000)
            {
                printf("Kendaraan Anda harus diservis.");
            }
            /* Lainnya
				Kendaraan Anda tidak harus diservis */
            else
            {
                printf("Kendaraan Anda tidak harus diservis");
            }
            break;
        /* Jika pilihan adalah 2 */
        case 2:
            /* Jika 3001 < mil dan mil <= 4500
				Kendaraan Anda harus diservis */
            if(3001 < mil && mil <= 4500)
            {
                 printf("Kendaraan Anda harus diservis.");
            }
            /* Lainnya
				Kendaraan Anda tidak harus diservis */
            else
            {
                printf("Kendaraan Anda tidak harus diservis");
            }
            break;
        /* Lainnya 
            Layanan tidak tersedia */
        default:
            printf("Layanan tidak tersedia.");
            break;
    }
}