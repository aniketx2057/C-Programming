
#include <stdio.h>

int main() {
    float totalSellingPrice, totalProfit, costPriceOne;

    printf("Enter total selling price of 15 items: ");
    scanf("%f", &totalSellingPrice);

    printf("Enter total profit earned: ");
    scanf("%f", &totalProfit);

    costPriceOne = (totalSellingPrice - totalProfit) / 15;

    printf("Cost Price of one item = %.2f\n", costPriceOne);

    return 0;
}
