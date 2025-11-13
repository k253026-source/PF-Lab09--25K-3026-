#include <stdio.h>
float rentalCost(int days, float km) {
    float base = days * 40;       
    float extra = 0;          
    float discount = 0;

    if(km > days * 100) {
        extra = (km - days * 100) * 0.25;
    }

    float total = base + extra;
    
    if(days >= 7) {
        discount = total * 0.10;
        total -= discount;
    }

    printf("Base Cost: $%.2f\n", base);
    printf("Extra Mileage Charge: $%.2f\n", extra);
    printf("Discount: $%.2f\n", discount);

    return total;
}

int main() {
    int days;
    float km;

    printf("Enter number of rental days: ");
    scanf("%d", &days);

    printf("Enter kilometers driven: ");
    scanf("%f", &km);

    float totalCost = rentalCost(days, km);

    printf("Final Rental Cost: $%.2f\n", totalCost);

    return 0;
}

