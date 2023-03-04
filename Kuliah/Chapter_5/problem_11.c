/* Programmer: Faa'iz Haikal Hilmi          Tanggal dibuat: 4 September 2022
 * NRP: 5025221219                          Kelas: Dasar Pemrograman B
 * Dosen: Ir. F.X. Arunanto, M.Sc           
 *
 * Meminta pengguna untuk terus menebak kedalaman suatu saluran beton diberikan
 * debit target berdasarkan persamaan Manning, hingga persentase eror masukan
 * sedekat 0.1% */

#include <stdio.h>      /* definisi printf dan scanf */
#include <math.h>       /* definisi pow */

#define TARGET_DEBIT 1000.0     /* Target debit */
#define KEMIRINGAN 0.0015		/* Kemiringan saluran beton */
#define KOEFISIEN 0.014		    /* Koefisien kekasaran saluran */
#define LEBAR 15.0			    /* Lebar saluran */
#define MAKS_KEDALAMAN 10.0	    /* Kedalaman maksimal saluran */

/* prototipe fungsi */
double hitung_debit(double kedalaman);

int main()
{
    double kedalaman;       /* input - kedalaman saluran */
    double selisih;         /* output - selisih debit yang didapat dengan debit target */
    double eror;            /* output - persentase eror kesalahan */
    
    /* Menampilkan instruksi untuk pengguna */
    printf("Sebuah saluran beton memiliki kedalaman 10 kaki.\n");
    printf("Pada kedalaman %.4f kaki, debit air yang mengalir adalah %.4f feet kubik/detik.\n", MAKS_KEDALAMAN/2, hitung_debit(5.0));
    printf("Pada kedalaman berapakah debit air yang mengalir sebesar %.4f feet kubik/detik?\n", TARGET_DEBIT);

    /* Menerima tebakan pertama dari pengguna */
    printf("Masukkan tebakan pertama> ");
    scanf("%lf", &kedalaman);

    /* Jika kedalaman berada pada interval [0, 10], maka masukan benar */
    if(0<=kedalaman && kedalaman<=MAKS_KEDALAMAN)
    {   
        /* Hitung selisih dan eror */
        selisih = TARGET_DEBIT-hitung_debit(kedalaman);
        eror = selisih*100/TARGET_DEBIT;

        /* Minta pengguna menebak kembali jika eror belum sedekat 0.1% */
        while(!(-0.1<=eror && eror<=0.1))
        {
            /* Tampilkan informasi selisih dan eror pada pengguna */
            printf("Kedalaman\t: %.4f kaki\t\tTarget debit\t: %.4f feet kubik/detik\n", kedalaman, TARGET_DEBIT);
            printf("Selisih\t\t: %.4f kaki\t\t%%eror\t\t: %.4f%%\n", selisih, eror);

            /* Menerima tebakan kedalaman kembali */
            printf("Tebak lagi> ");
            scanf("%lf", &kedalaman);

            /* Menghitung selisih dan eror yang baru */
            selisih = TARGET_DEBIT-hitung_debit(kedalaman);
            eror = selisih*100/TARGET_DEBIT;
        }
        /* Jika eror sudah sedekat 0.1%, tampilkan pesan selamat pada pengguna */
        printf("Tebakan Anda sudah cukup akurat.");
    }
    /* Jika kedalaman di luar interval [0, 10], keluarkan pesan eror */
    else
    {
        printf("Kedalaman tidak sesuai. Silahkan jalankan ulang program.");
    }
    return 0;
}
   
/* Menghitung debit air yang mengalir pada saluran beton
 * Syarat : kedalaman sudah terdefinisi */
double hitung_debit(double kedalaman)
{
    double radius = (LEBAR*kedalaman)/(2.0*kedalaman+LEBAR);
    double debit = (1.486 *kedalaman*LEBAR*pow(radius,(2.0/3))*pow(KEMIRINGAN,(1.0/2)))/KOEFISIEN;

    return debit;
}

