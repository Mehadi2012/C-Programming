#include <stdio.h>
#include <string.h>
#include <process.h>

int main()
{
    int quantity_of_Paratha,u_price_of_paratha,quantity_of_vegetable,u_price_of_vegetable,quantity_of_water,u_price_of_water,no_of_people;
    printf("Enter Quantity of paratha, Unit price of paratha :");
    scanf("%d %d", &quantity_of_Paratha,&u_price_of_paratha,&quantity_of_vegetable,&u_price_of_vegetable,&quantity_of_water,&u_price_of_water,&no_of_people);
    printf("Enter Quantity of vegetable, Unit price of vegetable :");
    scanf("%d %d",&quantity_of_vegetable,&u_price_of_vegetable);
    printf("Enter Quantity of water, Unit price of water :");
    scanf("%d %d",&quantity_of_water,&u_price_of_water);
    printf("Enter Number of People :");
    scanf("%d",&no_of_people);
    int bill = paratha(quantity_of_Paratha,u_price_of_paratha)+vegetable(quantity_of_vegetable,u_price_of_vegetable)+water(quantity_of_water,u_price_of_water);
    float total_bill = bill/no_of_people;
    printf("Individual people will pay %f tk",total_bill);

    return 0;
}
int paratha(int x, int y){
    return x*y;
}
int vegetable(int x, int y){
    return x*y;
}
int water(int x, int y){
    return x*y;
}
