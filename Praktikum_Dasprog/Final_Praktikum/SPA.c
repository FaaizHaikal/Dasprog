#include <stdio.h>
#include <math.h>

//find sum of digits of 6 + 66 + 666 + ... 666...6 (last term has n digits of 6)
int ar[20];
int solve(int digit){
    int sum = 0;
    long long int ans = 2*((((pow(10, digit+1))-10)/9)-digit)/3;
    printf("%lld\n", ans);
    int x = ans%1000;
    printf("%d\n", x);
    while(x>0){
        sum += x%10;
        x/=10;
    }

    return sum;
}
int solve2(int digit){
    int sum;
    int new_digit;
    int another_sum;
    switch(digit){
        case 1:
            sum = 6;
            break;
        case 2:
            sum = 9;
            break;
        case 3:
            sum = 18;
            break;
        default:
            switch(digit)
            {
            case 4:
            case 5:
            case 6:
                new_digit = 3;
                break;
            case 7:
            case 8:
            case 9:
            case 10:
                new_digit = 6;
                break;
            default:
                new_digit = 9;
                while(digit - new_digit > 4){
                    new_digit+=3;
                }
                break;
            }
            another_sum = solve(digit);
            sum = 11 * new_digit/3;
            printf("%d\n", sum);
            sum += another_sum;
    }

    return sum;
}



int main(){
    int q;
    scanf("%d", &q);
    printf("%d", solve2(q));
}