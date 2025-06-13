#include <stdio.h>

int main() {
    float units, amount, surcharge, total;

    printf("Enter total electricity units consumed: ");
    scanf("%f", &units);

    if (units <= 50) {
        amount = units * 0.50;
    } 
    else if (units <= 150) {
        amount = 25 + ((units - 50) * 0.75);
    } 
    else if (units <= 250) {
        amount = 100 + ((units - 150) * 1.20);
    } 
    else {
        amount = 220 + ((units - 250) * 1.50);
    }

    surcharge = amount * 0.20; 
    total = amount + surcharge;

    printf("Electricity Bill : Rs. %.2f", total);

    return 0;
}