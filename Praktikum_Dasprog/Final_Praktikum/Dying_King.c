#include <stdio.h>
#include <math.h>
#include <string.h>

int prime(int x)
{
    if(x<=1)
        return 0;
    if(x==2||x==3)
        return 1;
    if(x%2==0||x%3==0)
        return 0;
    for(int i=5;i<=sqrt(x);i+=6)
        if(x%i==0 || x%(i+2)==0)
            return 0;
    return 1;
}
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    struct data{
        char name[100];
        char lat[10];
        char longt[10];
        int x, y, flag_x, flag_y;
    };
    struct data place[a];
    char check_place[b][100];
    for(int i=0;i<a;i++){
        scanf("%s", place[i].name);
        scanf("%s", place[i].lat);
        scanf("%s", place[i].longt);
        sscanf(place[i].lat, "%d", &place[i].x);
        sscanf(place[i].longt, "%d", &place[i].y);
        place[i].flag_x = prime(place[i].x);
        place[i].flag_y = prime(place[i].y);
    }
    for(int i=0;i<b;i++)
        scanf("%s", check_place[i]);
    for(int i=0;i<b;i++)
    {
        int unknown = 1;
        for(int j=0;j<a;j++)
        {
            if(strcmp(check_place[i], place[j].name)==0){
                unknown = 0;
                if(place[j].flag_x && place[j].flag_y){
                    printf("%s aman! Bangunlah Kesatria!\n", place[j].name);
                    break;
                }
                else{
                    printf("%s tidak aman! Ini pasti ulah Gorgom!\n", place[j].name);
                }
            }
        }
        if(unknown)
            printf("Tempat apa itu? Kotaro tidak tahu!\n");
    }

    return 0;
}