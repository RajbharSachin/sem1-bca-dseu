#include <stdio.h>
struct stores{
    char name[20];
    float price;
    int quantity;
};

void update(struct stores* item, float p, int q);
int main(){
    float price_increment;
    int quantity_increment;
    struct stores item = {"Pen", 12.50, 50};
    printf("Enter price and quantity incremenets\n");
    scanf("%f %d", &price_increment, &quantity_increment);
    update(&item, price_increment, quantity_increment);
    printf("Updated Price Details\n");
    printf("%s\n",item.name);
    printf("%f\n",item.price);
    printf("%d\n",item.quantity);

    return 0;
}
void update(struct stores* item, float p, int q){
    item->price += p;
    item->quantity += q;
}
