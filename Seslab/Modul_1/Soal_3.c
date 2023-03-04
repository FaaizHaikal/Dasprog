/* Programmer: Faa'iz Haikal Hilmi          Tanggal dibuat: 18 September 2022
 * NRP: 5025221219                          Kelas: Dasar Pemrograman B
 *
 * A, B, C, D, E, F, dan G merupakan input sinyal untuk sebuah digit dari 0 - 9
 * dengan urutan        A
 *                  F       B
 *                      G
 *                  E       C
 *                      D
 * Buatlah program yang dapat menerima l1, l2, l3, dan l4 yang merupakan
 * notasi biner secara berurutan. Dari input yang diberikan, keluarkan nilai 
 * dari ketujuh input sinyal (1 menyala, 0 mati) */

#include <stdio.h>

int main()
{
    int l1, l2, l3, l4;
    int num;
    scanf("%d%d%d%d", &l1,&l2,&l3,&l4);
    num = 2*2*2*l1 + 2*2*l2 + 2*l3 + l4;
    switch(num)
    {
        case 0:
            printf("1 1 1 1 1 1 0");
            break;
        case 1:
            printf("0 1 1 0 0 0 0");
            break;
        case 2:
            printf("1 1 0 1 1 0 1");
            break;
        case 3:
            printf("1 1 1 1 0 0 1");
            break;
        case 4:
            printf("0 1 1 0 0 1 1");
            break;
        case 5:
            printf("1 0 1 1 0 1 0");
            break;
        case 6:
            printf("1 0 1 1 1 1 1");
            break;
        case 7:
            printf("1 1 1 0 0 0 0");
            break;
        case 8:
            printf("1 1 1 1 1 1 1");
            break;
        case 9:
            printf("1 1 1 1 0 1 1");
        default:
            printf("0 0 0 0 0 0 0");
            break;
    }

    return 0;
}