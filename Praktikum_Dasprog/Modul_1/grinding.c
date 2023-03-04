#include <stdio.h>
#include <math.h>
int main()
{
    int exp;
    scanf("%d", &exp);
    int slime=0;
    int hilicurl=0;
    double abyss = exp/10;
    int sisa_exp = exp%10;
    int serang_slime = 0;
    int serang_hilicurl = 0;
    int serang_mage = 0;
    if(exp>9)
    {
        abyss = floor(abyss);
        serang_mage = 5*abyss;
        if(sisa_exp == 0)
        {
            abyss = floor(abyss);
            serang_mage = 5*abyss;
        }
            else if(sisa_exp == 9)
            {
                abyss = 1 + floor(abyss);
                serang_mage = 5*abyss;
            }
                else if(6<sisa_exp && sisa_exp<=8)
                {
                    ++hilicurl;
                    serang_hilicurl = 4*hilicurl;
                }
                    else if(0<sisa_exp && sisa_exp<=6)
                    {
                        ++slime;
                        serang_slime = 3*slime;
                    }
    }
        else if(exp == 9)
        {
            abyss = 1;
            serang_mage = 5*abyss;
        }
            else
            {
                if(6<sisa_exp && sisa_exp<=8)
                {
                    ++hilicurl;
                    serang_hilicurl = 4*hilicurl;
                }
                    else if(0<sisa_exp && sisa_exp<=6)
                    {
                        ++slime;
                        serang_slime = 3*slime;
                    }
            }
    int serang = serang_slime+serang_hilicurl+serang_mage;
    int x = floor(abyss);
    printf("%d\n", serang);
    printf("%d\n", slime);
    printf("%d\n", hilicurl);
    printf("%d", x);

    return 0;
}