#include <stdio.h>

struct ayam
{
    int hp, att, spd, mult;
    char type;
};
struct ayam gaem;

int type_gaem_menang(char tipe, char type);
int solve(struct ayam *gaem, struct ayam lawan, int turn, int unggul, int cepat);

int main()
{
    scanf("%d%d%d", &gaem.hp, &gaem.att, &gaem.spd);
    scanf(" %c", &gaem.type);
    scanf("%d", &gaem.mult);
    int n, turn;
    scanf("%d%d", &n, &turn);
    struct ayam lawan[n];
    int unggul, cepat=-1, menang, counter=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d%d%d", &lawan[i].hp, &lawan[i].att, &lawan[i].spd);
        scanf(" %c", &lawan[i].type);
        scanf("%d", &lawan[i].mult);
        unggul = type_gaem_menang(gaem.type, lawan[i].type);
        if(gaem.spd >= lawan[i].spd)
            cepat = 1;
        menang = solve(&gaem, lawan[i], turn, unggul, cepat);
        switch(menang)
        {
            case 1:
                counter+=1;
                break;
            default:
                counter = 0;
                break;
        }  
    }
    printf("Pitik sejatiku, I choose you!\nHealth Point : %d\nAttack Damage : %d\nSpeed : %d\n", gaem.hp, gaem.att, gaem.spd);
    switch(gaem.type)
    {
        case 'K':
            printf("Type : Kuat\n");
            break;
        case 'S':
            printf("Type : Santuy\n");
            break;
        case 'B':
            printf("Type : Barbar\n");
            break;
        case 'P':
            printf("Type : Pintar\n");
            break;
        case 'G':
            printf("Type : Gesit\n");
            break;
    }
    printf("Multiplier : %dx\nJumlah Kemenangan bersama Gaem : %d\n\n", gaem.mult, counter);

    return 0;
}

int type_gaem_menang(char tipe, char type)
{
    switch(tipe)
    {
        case 'K':
            switch(type)
            {
                case 'S':
                case 'B':
                    return 1;
                default:
                    return -1;
            }
        case 'S':
            switch(type)
            {
                case 'B':
                case 'P':
                    return 1;
                default:
                    return -1;
            }
        case 'B':
            switch(type)
            {
                case 'P':
                case 'G':
                    return 1;
                default:
                    return -1;
            }
        case 'P':
            switch(type)
            {
                case 'G':
                case 'K':
                    return 1;
                default:
                    return -1;
            }
            break;
        case 'G':
            switch(type)
            {
                case 'K':
                case 'S':
                    return 1;
                default:
                    return -1;
            }
    }
}

int solve(struct ayam *gaem, struct ayam lawan, int turn, int unggul, int cepat)
{
    int temp = lawan.hp;
    int temp2 = gaem->hp;
    switch(unggul)
    {
        case 1:
            switch(cepat)
            {
                case 1:
                    for(int j=0;j<turn;j++)
                    {
                        lawan.hp -= (gaem->att) * (gaem->mult);
                        if(lawan.hp<=0)
                        {
                            gaem->hp = temp2;
                            return 1;
                        }
                        gaem->hp -= lawan.att;
                        if(gaem->hp<=0)
                        {
                            *gaem = lawan;
                            gaem->hp = temp;
                            return 0;
                        }
                    }
                    if(lawan.hp>gaem->hp)
                    {
                        *gaem = lawan;
                        gaem->hp = temp;
                        return 0;
                    }
                    else
                    {
                        gaem->hp = temp2;
                        return 1;
                    }
                default:
                    for(int j=0;j<turn;j++)
                    {
                        gaem->hp -= lawan.att;
                        if(gaem->hp<=0)
                        {
                            *gaem = lawan;
                            gaem->hp = temp;
                            return 0;
                        }
                        lawan.hp -= (gaem->att) * (gaem->mult);
                        if(lawan.hp<=0)
                        {
                            gaem->hp = temp2;
                            return 1;
                        }
                    }
                    if(lawan.hp>gaem->hp)
                    {
                        *gaem = lawan;
                        gaem->hp = temp;
                        return 0;
                    }
                    else
                    {
                        gaem->hp = temp2;
                        return 1;
                    }
            }
        default:
            switch(cepat)
            {
                case 1:
                    for(int j=0;j<turn;j++)
                    {
                        lawan.hp -= (gaem->att);
                        if(lawan.hp<=0)
                        {
                            gaem->hp = temp2;
                            return 1;
                        }
                        gaem->hp -= lawan.att * lawan.mult;
                        if(gaem->hp<=0)
                        {
                            *gaem = lawan;
                            gaem->hp = temp;
                            return 0;
                        }
                    }
                    if(lawan.hp>gaem->hp)
                    {
                        *gaem = lawan;
                        gaem->hp = temp;
                        return 0;
                    }
                    else
                    {
                        gaem->hp = temp2;
                        return 1;
                    }
                default:
                    for(int j=0;j<turn;j++)
                    {
                        gaem->hp -= lawan.att * lawan.mult;
                        if(gaem->hp<=0)
                        {
                            *gaem = lawan;
                            gaem->hp = temp;
                            return 0;
                        }
                        lawan.hp -= (gaem->att);
                        if(lawan.hp<=0)
                        {
                            gaem->hp = temp2;
                            return 1;
                        }
                    }
                    if(lawan.hp>gaem->hp)
                    {
                        *gaem = lawan;
                        gaem->hp = temp;
                        return 0;
                    }
                    else
                    {
                        gaem->hp = temp2;
                        return 1;
                    }
            }
    }
}


