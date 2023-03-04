/* Programmer: Faa'iz Haikal Hilmi          Tanggal dibuat: 4 September 2022
 * NRP: 5025221219                          Kelas: Dasar Pemrograman B
 * Dosen: Ir. F.X. Arunanto, M.Sc           
 *
 * Menghitung luas di bawah kurva fungsi g dan h pada interval [a, b] 
 * menggunakan aturan trapesium dengan sub-interval sebanyak n = 2, 4, 8, .. , 128 */

#include <stdio.h>		/* definisi printf dan scanf */
#include <math.h>		/* definisi pow */

/* Protitipe fungsi */
void hitung_luas_g(double a, double b, int n);
void hitung_luas_h(double a, double b, int n);
double fungsi_g(double x);
double fungsi_h(double x);
void instruksi();

int main()
{
    double a;		/* input - batas bawah */
    double b;		/* input - batas atas */
    int pilihan;	/* input - pilihan fungsi yang ingin dicari luas kurvanya */

	instruksi();	/* Menampilkan instruksi pada pengguna */

	/* Mendapatkan pilihan fungsi dari pengguna */
	printf("Pilih fungsi yang ingin dicari luasnya> ");
	scanf("%d", &pilihan);

	/* Jika masukan pilihan tidak ada, keluarkan pesan eror */
	if(!(pilihan == 1 || pilihan == 2))
	{
		printf("Eror. Tidak ada dalam pilihan\n");
		return 0;
	}
	else
	{
		/* Mendapatkan nilai batas atas dan batas bawah */
		printf("Masukkan batas atas> ");
		scanf("%lf", &b);
		printf("Masukkan batas bawah> ");
		scanf("%lf", &a);

		/* Memanggil fungsi hitung luas untuk setiap banyak sub-interval n */
		int n = 2;
		while(n<=128)
    	{
        	switch(pilihan)
			{
			case 1:
				hitung_luas_g(a, b, n);
				n *= 2;
				break;
			case 2:
				hitung_luas_h(a, b, n);
				n *= 2;
				break;
    		}
		}
	}	
	return 0;
}

/* Definisi fungsi g(x)
 * Syarat : x sudah terdefinisi */
double fungsi_g(double x)
{
    double g = x*x * sin(x);
    return g;
}

/* Definisi fungsi h(x)
 * Syarat : x sudah terdefinisi */
double fungsi_h(double x)
{
    double h = pow((4-(x*x)),0.5);
    return h;
}

/* Menghitung luas fungsi g(x)
 * Syarat : a, b, dan n sudah terdefinisi
 * a adalah batas bawah, b adalah batas atas, dan n adalah banyak sub-interval */
void hitung_luas_g(double a, double b, int n)
{
    double hitung_g=0;
    double h = (b-a)/n;		/* sub-interval */

    /* Jumlah 2*g(x) untuk setiap sub-interval */
    for(int i=2;i<=n;i++)
    {
        hitung_g += 2 * fungsi_g(a+i*h);
    }

    double luas_g = (h/2)*(fungsi_g(a)+fungsi_g(b)+hitung_g);	/* output - luas di bawah kurva g(x) */

	/* Menampilkan hasil luas di bawah kurva g(x) */
    printf("Luas kurva di bawah kurva g(x) untuk sub-interval sebanyak %d adalah %f\n", n, luas_g);
}

/* Menghitung luas fungsi h(x)
 * Syarat : a, b, dan n sudah terdefinisi
 * a adalah batas bawah, b adalah batas atas, dan n adalah banyak sub-interval */
void hitung_luas_h(double a, double b, int n)
{
	double hitung_h=0;
    double h = (b-a)/n;		/* sub-interval */
    
	/* Jumlah 2*h(x) untuk setiap sub-interval */
    for(int i=2;i<=n;i++)
    {
        hitung_h += 2 * fungsi_h(a+i*h);     
    }
	
    double luas_h = (h/2)*(fungsi_h(a)+fungsi_h(b)+hitung_h);	/* output - luas di bawah kurva h(x) */

	/* Menampilkan hasil luas di bawah kurva h(x) */
	printf("Luas kurva di bawah kurva h(x) untuk sub-interval sebanyak %d adalah %f\n", n, luas_h);

}

/* Menampilkan instruksi pada pengguna */
void instruksi()
{
	printf("Program ini berfungsi untuk menghitung luas di bawah kurva sebuah fungsi menggunakan aturan trapesium\n");
	printf("pada suatu interval [a, b] dengan sub-interval sebanyak n = 2, 4, 8, ... , 128.\n");
	printf("Tersedia 2 pilihan fungsi, silahkan pilih dengan mengetik angka urutan fungsi,\n");
	printf("kemudian tekan <ENTER> dan ikuti instruksi berikutnya.\n");
	printf("1. g(x) = x^2 * sin(x)\n");
	printf("2. h(x) = (4-x^2)^1/2\n");
}
