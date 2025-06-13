#include <stdio.h>
int main()
{
    int men, sell;
    printf("Manufacturing Cost = ");
    scanf("%d", &men);
    printf("Selling Price = ");
    scanf("%d", &sell);

    if (men < sell)
        printf("Profit = %d", sell - men);
    else
        printf("Loss = %d", sell - men);

    return 0;
}