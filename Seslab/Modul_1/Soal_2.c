/* Programmer: Faa'iz Haikal Hilmi          Tanggal dibuat: 18 September 2022
 * NRP: 5025221219                          Kelas: Dasar Pemrograman B
 *
 * Buatlah program yang hanya menerima inputan 0 sampai 999 dan mengeluarkan 
 * hasil berupa kalimat terbilang dari angka yang dimasukan. */

#include <stdio.h>

int main()
{
    short x;        /* input - bilangan yang akan dicetak kalimatnya */
    short digit1;   /* digit pertama dari bilangan x */
    short digit2;   /* digit ke-dua dari bilangan x */
    short digit3;   /* digit ke-tiga dari bilangan x */

    /* Mendapatkan nilai x */
    printf("Masukkan bilangan> ");
    scanf("%d", &x);

    /* Mendapatkan nilai tiap digit dari x */
    digit1 = x/100;
    digit2 = (x/10)%10;
    digit3 = x%10;

    if(x>=100 && x<=999)
    {
        switch(digit1)
        {
            case 1:
                printf("Seratus");
                break;
            case 2:
                printf("Dua ratus");
                break;
            case 3:
                printf("Tiga ratus");
                break;
            case 4:
                printf("Empat ratus");
                break;
            case 5:
                printf("Lima ratus");
                break;
            case 6:
                printf("Enam ratus");
                break;
            case 7:
                printf("Tujuh ratus");
                break;
            case 8:
                printf("Delapan ratus");
                break;
            case 9:
                printf("Sembilan ratus");
                break;
            default:
                break;
        }
        switch(digit2)
        {
            case 0:
                printf(" ");
                break;
            case 1:
                switch(digit3)
                {
                    case 0:
                        printf(" sepuluh");
                        return 0;
                    case 1:
                        printf(" sebelas");
                        return 0;
                    case 2:
                        printf(" dua belas");
                        return 0;
                    case 3:
                        printf(" tiga belas");
                        return 0;
                    case 4:
                        printf(" empat belas");
                        return 0;
                    case 5:
                        printf(" lima belas");
                        return 0;
                    case 6:
                        printf(" enam belas");
                        return 0;
                    case 7:
                        printf(" tujuh belas");
                        return 0;
                    case 8:
                        printf(" delapan belas");
                        return 0;
                    case 9:
                        printf(" sembilan belas");
                        return 0;
                    default:
                        return 0;
                }
            case 2:
                printf(" dua puluh ");
                break;
            case 3:
                printf(" tiga puluh ");
                break;
            case 4:
                printf(" empat puluh ");
                break;
            case 5:
                printf(" lima puluh ");
                break;
            case 6:
                printf(" enam puluh ");
                break;
            case 7:
                printf(" tujuh puluh ");
                break;
            case 8:
                printf(" delapan puluh ");
                break;
            case 9:
                printf(" sembilan puluh ");
                break;
            default:
                break;
        }
        switch(digit3)
        {
            case 1:
                printf("satu");
                break;
            case 2:
                printf("dua");
                break;
            case 3:
                printf("tiga");
                break;
            case 4:
                printf("empat");
                break;
            case 5:
                printf("lima");
                break;
            case 6:
                printf("enam");
                break;
            case 7:
                printf("tujuh");
                break;
            case 8:
                printf("delapan");
                break;
            case 9:
                printf("sembilan");
                break;
            default:
                break;
        }
    }
        else if(x>=10 && x<=99)
        {
            switch(digit2)
            {
                case 1:
                    switch(digit3)
                    {
                        case 0:
                            printf("Sepuluh");
                            return 0;
                        case 1:
                            printf("Sebelas");
                            return 0;
                        case 2:
                            printf("Dua belas");
                            return 0;
                        case 3:
                            printf("Tiga belas");
                            return 0;
                        case 4:
                            printf("Empat belas");
                            return 0;
                        case 5:
                            printf("Lima belas");
                            return 0;
                        case 6:
                            printf("Enam belas");
                            return 0;
                        case 7:
                            printf("Tujuh belas");
                            return 0;
                        case 8:
                            printf("Delapan belas");
                            return 0;
                        case 9:
                            printf("Sembilan belas");
                            return 0;
                        default:
                            break;
                    }
                case 2:
                    printf("Dua puluh ");
                    break;
                case 3:
                    printf("Tiga puluh ");
                    break;
                case 4:
                    printf("Empat puluh ");
                    break;
                case 5:
                    printf("Lima puluh ");
                    break;
                case 6:
                    printf("Enam puluh ");
                    break;
                case 7:
                    printf("Tujuh puluh ");
                    break;
                case 8:
                    printf("Delapan puluh ");
                    break;
                case 9:
                    printf("Sembilan puluh ");
                    break;
                default:
                    break;
            }
            switch(digit3)
            {
                case 1:
                    printf("satu");
                    break;
                case 2:
                    printf("dua");
                    break;
                case 3:
                    printf("tiga");
                    break;
                case 4:
                    printf("empat");
                    break;
                case 5:
                    printf("lima");
                    break;
                case 6:
                    printf("enam");
                    break;
                case 7:
                    printf("tujuh");
                    break;
                case 8:
                    printf("delapan");
                    break;
                case 9:
                    printf("sembilan");
                    break;
                default:
                    break;
            }
        }
            else if(x>=0 && x<=9)
            {
                switch(digit3)
                {
                    case 0:
                        printf("Nol");
                        break;
                    case 1:
                        printf("Satu");
                        break;
                    case 2:
                        printf("Dua");
                        break;
                    case 3:
                        printf("Tiga");
                        break;
                    case 4:
                        printf("Empat");
                        break;
                    case 5:
                        printf("Lima");
                        break;
                    case 6:
                        printf("Enam");
                        break;
                    case 7:
                        printf("Tujuh");
                        break;
                    case 8:
                        printf("Delapan");
                        break;
                    case 9:
                        printf("Sembilan");
                        break;
                    default:
                        break;
                }
            }
                else
                {
                    printf("Angka harus dari 0 hingga 999");
                    return 0;
                }
    
    return 0;
}