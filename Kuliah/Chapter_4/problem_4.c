/* Programmer: Faa'iz Haikal Hilmi          Tanggal dibuat: 22 September 2022
 * NRP: 5025221219                          Kelas: Dasar Pemrograman B
 * Dosen: Ir. F.X. Arunanto, M.Sc           
 *
 * Menampilkan isi silinder gas terkompresi berdasarkan huruf pertama
 * dari warna silinder. Misal, 'K' atau 'k' adalah kuning. */

#include <stdio.h>      /* definisi printf dan scanf */

int main()
{
    char warna;     /* input - huruf pertama dari warna */

    /* Mendapatkan nilai warna */
    printf("Masukkan huruf pertama warna silinder> ");
    scanf("%c", &warna);

    /* Menentukan dan menampilkan isi silinder gas terkompresi */
    /* Jika warna == ‘O’ atau ‘o’
		Tampilkan amonia */
    if(warna == 'O' || warna == 'o')
    {
        printf("Silinder gas terkompresi berisi amonia");
    }        
		/* Jika warna == ‘C’ atau ‘c’
			Tampilkan karbon monoksida */
        else if(warna == 'C' || warna == 'c')
        {
            printf("Silinder gas terkompresi berisi karbon monoksida");
        }
		    /* Jika warna == ‘K’ atau ‘k’
				Tampilkan hidrogen */
            else if(warna == 'K' || warna == 'k')
            {
                printf("Silinder gas terkompresi berisi hidrogen");
            }
		        /* Jika warna == ‘H’ atau ‘h’
			        Tampilkan oksigen */
                else if(warna == 'H' || warna == 'h')
                {
                    printf("Silinder gas terkompresi berisi oksigen");
                }
                /* Lainnya
				    Tampilkan konten tidak diketahui */
                else
                {
                    printf("Konten tidak diketahui");
                }
   
            
                
                    
                    

    return 0;
}