/* Programmer: Faa'iz Haikal Hilmi          Tanggal dibuat: 19 September 2022
 * NRP: 5025221219                          Kelas: Dasar Pemrograman B
 * Dosen: Ir. F.X. Arunanto, M.Sc           
 *
 * Menghitung uang yang harus dipinjam dan pembayaran yang harus dilakukan per bulan,
 * berdasarkan pada masukan harga mobil, uang muka, bunga per tahun, dan banyak pembayaran*/

#include <stdio.h>      /* definisi printf dan scanf */
#include <math.h>       /* definisi pow */

/* prototipe fungsi */
void bayar();

int main()
{
    double harga_mobil;             /* input - harga mobil */
    double uang_muka;               /* input - uang muka */
    double bunga_per_tahun;         /* input - suku bunga per tahun */
    double banyak_pembayaran;       /* input - total dilakukannya pembayaran */

    /* Dapatkan harga mobil, uang muka, suku bunga per tahun, dan banyak pembayaran */
    printf("Masukkan harga mobil ($)> ");
    scanf("%lf", &harga_mobil);
    printf("Masukkan uang muka ($)> ");
    scanf("%lf", &uang_muka);
    printf("Masukkan suku bunga per tahun (%)> ");
    scanf("%lf", &bunga_per_tahun);
    printf("Masukkan banyak pembayaran yang akan dilakukan> ");
    scanf("%lf", &banyak_pembayaran);

    /* Memanggil fungsi bayar */
    bayar(harga_mobil, uang_muka, bunga_per_tahun, banyak_pembayaran);
}

/* Menghitung dan menampilkan jumlah pinjaman dan pembayaran per bulan */
/* Pre: a, b, c, dan d telah terdefinisi dan math.h digunakan */
    /* pinjaman adalah argumen pertama dikurang argumen ke-dua */
    /* pembayaran per bulan adalah ((bunga_per_bulan*pinjaman)/(1-pow(1+bunga_per_bulan,argumen ke-empat) */
        /* bunga_per_bulan adalah argumen ke-tiga dibagi 1200 */
void bayar(double a, double b, double c, double d)
{
    double pinjaman;
    double bunga_per_bulan;
    double pembayaran_per_bulan;

    pinjaman = a - b;
    bunga_per_bulan = (c/12)/100;
    pembayaran_per_bulan = (bunga_per_bulan*pinjaman)/(1-pow(1+bunga_per_bulan,-d));

    printf("Anda harus meminjam sebanyak $%.2f dan membayar sebanyak $%.2f per bulan.", pinjaman, pembayaran_per_bulan);
}
