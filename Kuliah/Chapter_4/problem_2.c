/* Programmer: Faa'iz Haikal Hilmi          Tanggal dibuat: 22 September 2022
 * NRP: 5025221219                          Kelas: Dasar Pemrograman B
 * Dosen: Ir. F.X. Arunanto, M.Sc           
 *
 * Menghitung Indeks Massa Tubuh (IMT) dan mengkategorikannya berdasarkan 
 * Pusat Pengendalian dan Pencegahan Penyakit Amerika Serikat. */

#include <stdio.h>      /* definisi printf dan scanf */

int main()
{
    double berat;       /* input - berat badan pengguna */
    double tinggi;      /* input - tinggi badan pengguna */
    double IMT;         /* output - Indeks Massa Tubuh */

    /* Mendapatkan nilai berat dan tinggi badan */     
    printf("Masukkan berat badan (pon)> ");
    scanf("%lf", &berat);
    printf("Masukkan tinggi badan (inci)> ");
    scanf("%lf", &tinggi);

    /* Menghitung IMT /*
        /* IMT adalah (703 * berat)/(tinggi * tinggi) */

    IMT = (703 * berat)/(tinggi * tinggi);

    /* Mengkategorikan IMT dan menampilkannya */
    /* Jika IMT < 18.5
		Tampilkan kekurangan berat badan */
    if(IMT < 18.5)
    {
        printf("IMT Anda adalah %.1f,  Anda kekurangan berat badan.", IMT);
    }
		/* Jika 18.5 <= IMT atau IMT <= 24.9
			Tampilkan normal */
        else if(18.5<=IMT && IMT<=24.9)
        {
            printf("IMT Anda adalah %.1f, tubuh Anda normal.", IMT);
        }
		    /* Jika 25 <= IMT <= 29.9
				Tampilkan kelebihan berat badan */
            else if(25<=IMT && IMT<=29.9)
            {
                printf("IMT Anda adalah %.1f, Anda kelebihan berat badan.", IMT);
            }
            /* Lainnya
				Tampilkan obesitas */
            else
            {
                printf("IMT Anda adalah %.1f, Anda obesitas.", IMT);
            }
        
    
    return 0;

}

