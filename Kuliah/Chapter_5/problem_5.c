/* Programmer: Faa'iz Haikal Hilmi          Tanggal dibuat: 30 September 2022
 * NRP: 5025221219                          Kelas: Dasar Pemrograman B
 * Dosen: Ir. F.X. Arunanto, M.Sc           
 *
 * Mencari FPB dua bilangan bulat menggunakan algoritma Euclid */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1;       /* input - bilangan bulat pertama */
	int num2;       /* input - bilangan bulat ke dua */
	int sisa;       /* output - FPB kedua bilangan */

	printf("Masukkan bilangan bulat pertama> ");
	scanf("%d", &num1);
	printf("Masukkan bilangan bulat ke dua> ");
	scanf("%d", &num2);

    /* Mutlakkan kedua bilangan */
	num1 = abs(num1);
	num2 = abs(num2);

	/* Tampilkan FPB kedua bilangan menggunakan algoritma Euclid
        /* Jika bilangan ke dua adalah 0, maka FPB adalah bilangan pertama */
    if(num2 == 0)
    {
        sisa = num1;
        printf("FPB dari kedua bilangan adalah %d", sisa);
    }
    /* Jika bilangan ke dua tak nol, gunakan algoritma Euclid */
    else
    {
        while(num1 % num2 > 0)
        {
            sisa = num1 % num2;
            num1 = num2;
            num2 = sisa;
        }
        printf("FPB dari kedua bilangan adalah %d", sisa);
    }
        
}
