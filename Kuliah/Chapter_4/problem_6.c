/* Programmer: Faa'iz Haikal Hilmi          Tanggal dibuat: 22 September 2022
 * NRP: 5025221219                          Kelas: Dasar Pemrograman B
 * Dosen: Ir. F.X. Arunanto, M.Sc           
 *
 * Menampilkan kuadran dari suatu titik pada bidang kartesius. */

#include <stdio.h>      /* definisi printf dan scanf */

int main()
{
    double x;   /* input dan output - koordinat pada sumbu-x */
    double y;   /* input dan output - koordinat pada sumbu-y */

    /* Mendapatkan koordinat x dan y */
    printf("Masukkan koordinat pada sumbu-x> ");
    scanf("%lf", &x);
    printf("Masukkan koordinat pada sumbu-y> ");
    scanf("%lf", &y);

    /* Menentukan dan menampilkan letak kuadran dari titik koordinat */
    /* Jika x>0 dan y>0
		Titik terletak pada kuadran I */
    if(x>0 && y>0)
    {
        printf("Titik (%.1f, %.1f) terletak pada kuadran I", x, y);
    }
	    /* Jika x<0 dan y>0
		    Titik terletak pada kuadran II */
        else if(x<0 && y>0)
        {
            printf("Titik (%.1f, %.1f) terletak pada kuadran II", x, y);
        }
	        /* Jika x<0 dan y<0
		        Titik terletak pada kuadran III */
            else if(x<0 && y<0)
            {
                printf("Titik (%.1f, %.1f) terletak pada kuadran III", x, y);
            }
	            /* Jika x>0 dan y<0
		            Titik terletak pada kuadran IV */
                else if(x>0 && y<0)
                {
                    printf("Titik (%.1f, %.1f) terletak pada kuadran IV", x, y);
                }
	                /* Jika x == 0 dan y != 0
		                Titik terletak pada sumbu-x */
                    else if(x==0 && y!=0)
                    {
                        printf("Titik (%.1f, %.1f) terletak pada sumbu-x", x, y);
                    }
	                /* Jika x != 0 dan y == 0
		                Titik terletak pada sumbu-y */
                        else if(x!=0 && y==0)
                        {
                            printf("Titik (%.1f, %.1f) terletak pada sumbu-y", x, y);
                        }
	                    /* Lainnya
		                    Titik terletak pada perpotongan sumbu-x dan sumbu-y */
                        else
                        {
                            printf("Titik (%.1f, %.1f) terletak pada perpotongan sumbu-x dan sumbu-y", x, y);
                        }

    return 0;
}

