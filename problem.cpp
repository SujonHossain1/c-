#include <stdio.h>
int main(){

    int money;

    printf("Enter the amount: ");
    scanf("%d", &money);

    float discount = 0;

    if(100 <= money < 500){
        discount = money * 0.05;
    }
    else if(500 <= money < 1000){
        discount = money * 0.10;
    }
    else if(1000 <= money <= 5000){
            discount = money * 0.30;
    }


    printf("Give money with discount: %.2f \n", money - discount);

    return 0;
}
