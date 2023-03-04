#include <stdio.h>
#define KOLOM 2
void reverse_array(int ar[][KOLOM], int T)
{
    for(int i=0;i<T;i++)
    {
        int temp, x;
        for(int j=0;j<KOLOM;j++)
        {
            x=0;
            while(ar[i][j]!=0)
            {
                temp = ar[i][j]%10;
                x = x*10+temp;
                ar[i][j]/=10;
            }
            ar[i][j]=x;
        }
    }
}
void add_array(const int ar[][KOLOM], int add[], int T)
{
    int x;
    for(int i=0;i<T;i++)
    {
        x = 0;
        for(int j=0;j<KOLOM;j++)
        {
            x += ar[i][j];
        }
        add[i] = x;
    }
}

void reverse_2(int add[], int T)
{
    int temp, x;
    for(int i=0;i<T;i++)
    {
        x=0;
        while(add[i]!=0)
        {
            temp = add[i]%10;
            x = x*10+temp;
            add[i]/=10;
        }
        add[i]=x;
    }
    
}
int main()
{
    int T;
    scanf("%d", &T);
    int ar[T][KOLOM];
    
    for(int i=0;i<T;i++)
    {
        for(int j=0;j<KOLOM;j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    reverse_array(ar, T);
    int add[T];
    add_array(ar, add, T);
    reverse_2(add, T);
    for(int i=0;i<T;i++)
    {
        printf("%d\n", add[i]);
    }
    return 0;
}
