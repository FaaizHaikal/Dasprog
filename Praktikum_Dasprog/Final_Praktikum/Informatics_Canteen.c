#include <stdio.h>
#include <string.h>

struct information
{
    char nama[70];
    int price, stock;
    int discount;
    int flag;
};

int main()
{
    struct information menu[100010];
    int id;
    int income = 0;
    while(1){
        char command[10];
        scanf("%s", command);
        if(strcmp(command, "CLOSE")==0){
            printf("Earnings: Rp%d\n", income);
            printf("Informatics canteen is closing... thanks for the visit!");
            break;
        }
        else if(strcmp(command, "ADD")==0){
            int price, stock;
            char name[64];
            scanf("%d", &id);
            scanf("\n%[^\n]s", name);
            scanf("%d%d", &price, &stock);
            if(menu[id].flag == 0){
                menu[id].price = price;
                menu[id].stock = stock;
                strcpy(menu[id].nama, name);
                menu[id].flag = 1;
                printf("Menu added\n");
            }
            else
                printf("Menu is already exist!\n");
        }
        else if(strcmp(command, "ORDER")==0){
            int amount;
            scanf("%d%d", &id, &amount);
            if(menu[id].flag == 0)
                printf("Menu does not exist\n");
            else if(amount == 0)
                printf("So you want to order or what\n");
            else if(menu[id].stock < amount)
                printf("Apologize, the stock is not enough\n");  
            else{
                printf("Ordered %dx %s for Rp%d\n", amount, menu[id].nama, menu[id].price * amount);
                income = income + menu[id].price * amount;
                menu[id].stock -= amount;
            }   
        }
        else if(strcmp(command, "INFO")==0){
            scanf("%d", &id);
            if (menu[id].flag == 0)
                printf("Menu does not exist\n");
            else
                printf("#%d %s\nPrice : Rp%d\nStock : %dx\n", id, menu[id].nama, menu[id].price, menu[id].stock);
        }
        else if(strcmp(command, "DISC")==0){
            double discount;
            scanf("%d%lf", &id, &discount);
            if (menu[id].flag == 0)
                printf("Menu does not exist\n");
            else{
                menu[id].price = menu[id].price - ((menu[id].price*discount)/100);
                printf("Discount added\n");
            }
        }
        else if(strcmp(command, "REMOVE")==0){
            scanf("%d", &id);
            if (menu[id].flag == 0)
                printf("Menu does not exist\n");
            else{
                menu[id].flag = 0;
                printf("Menu removed\n");
            }
        }
        else
            printf("Unknown command\n");
    }
    return 0;
}
