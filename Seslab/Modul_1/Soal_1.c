/* Programmer: Faa'iz Haikal Hilmi          Tanggal dibuat: 18 September 2022
 * NRP: 5025221219                          Kelas: Dasar Pemrograman B
 *
 * Mengecek apakah input bilangan dari 0 - 999 merupakan bilangan Armstrong.
 * Suatu bilangan dikatakan bilangan armstrong jika dan hanya jika angka tersebut sama
 * dengan jumlah hasil digit yang dipangkatkan banyak digit angka tersebut. */

#include <stdio.h>      /* Definisi scanf dan printf */

int main()
{
    short x;        /* input - bilangan yang akan dicek */
    short digit1;   /* digit pertama dari bilangan x */
    short digit2;   /* digit ke-dua dari bilangan x */
    short digit3;   /* digit ke-tiga dari bilangan x */
    short jumlah;   /* jumlah digit armstrong */

    /* Mendapatkan nilai x */
    printf("Masukkan bilangan> ");
    scanf("%d", &x);

    /* Mendapatkan nilai tiap digit dari x */
    digit1 = x%10;
    digit2 = (x/10)%10;
    digit3 = x/100;

    if(x>=100 && x<=999)
    {
        jumlah = digit1*digit1*digit1 + digit2*digit2*digit2 + digit3*digit3*digit3;
    }
        else if(x>=10 && x<=99)
        {
            jumlah = digit1*digit1 + digit2*digit2;
        }
            else if(x>=0 && x<=9)
            {
                jumlah = digit1;
            }
            else
            {
                printf("Bilangan harus dari 0 hingga 999");

                return 0;
            }
            
    if(jumlah == x)
    {
        printf("Merupakan Bilangan Armstrong");
    }
    else
    {
        printf("Bukan Merupakan Bilangan Armstrong");
    }

    return 0;
}