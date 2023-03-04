/* Programmer: Faa'iz Haikal Hilmi          Tanggal dibuat: 9 September 2022
 * Dosen: Ir. F.X. Arunanto, M.Sc           Kelas: IF184101
 *
 * Mencari tripel phytagoras berdasarkan masukan 2 bilangan bulat posiitf m, n
 * dengan sisi 1 = m*m - n*n, sisi 2 = 2mn, dan hipotenusa = m*m + n*n */

#include <stdio.h>
#include <math.h>       /* Library math untuk menggunakan fungsi mutlak */

int main()
{
    /* Variabel untuk menyimpan data yang dibutuhkan */
    int m, n, sisi1, sisi2, hipotenusa;

    /* Mendapatkan nilai m dan n */
    printf("Masukkan bilangan bulat positif pertama> ");
    scanf("%d", &m);
    printf("Masukkan bilangan bulat positif ke-dua> ");
    scanf("%d", &n);
    
    /* Merumuskan tiap sisi dari tripel phytagoras sesuai di PERSOALAN */
    sisi1 = abs(m*m - n*n);     /* Menggunakan fungsi mutlak */
    sisi2 = 2*m*n;
    hipotenusa = m*m + n*n;

    /* Menampilkan hasil tripel phytagoras */
    printf("Tripel phytagoras dari bilangan ini adalah (%d, %d, %d)", sisi1, sisi2, hipotenusa);
}

