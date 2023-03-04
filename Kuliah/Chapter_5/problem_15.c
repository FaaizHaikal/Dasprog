/* Programmer: Faa'iz Haikal Hilmi          Tanggal dibuat: 4 September 2022
 * NRP: 5025221219                          Kelas: Dasar Pemrograman B
 * Dosen: Ir. F.X. Arunanto, M.Sc           
 *
 * Menghitung nilai pi menggunakan formula Leibniz 
 * dengan perulangan sebanyak n */

#include <stdio.h>      /* definisi printf dan scanf */
#include <math.h>       /* definisi pow */

int main()
{
	int n;              /* input - banyaknya perulangan */
	double pi=0;      	/* output - nilai pi */

    /* Petunjuk untuk pengguna */
	printf("Program ini menghitung dan menampilkan nilai konstanta pi "
			"berdasarkan formula Leibniz.\nMasukkan bilangan bulat positif "
			"yang menyatakan banyaknya perulangan untuk perhitungan pi.\n"
			"Semakin besar angka, semakin akurat nilai pi yang didapat.\n");
	do
	{
        /* Dapatkan nilai n */
		printf("Masukkan banyaknya perulangan> ");
		scanf("%d", &n);

        /* Jika n bulat positif, maka nilai pi dapat dihitung */
		if(n>=1)
		{
            /* Hitung nilai pi */
			for(int i=1;i<=n;i++)
			{
				pi += pow(-1,i+1) * (4.0/(2*i-1));
			}
			printf("Nilai pi adalah %f", pi);
		}
        /* Jika n tidak bulat positif, keluarkan pesan eror dan ulangi */
		else
		{
			printf("Angka harus bilangan bulat positif.\n\n");
			continue;
		}	
	}while(n<1);
	return 0;
}
