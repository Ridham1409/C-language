#include <stdio.h>
int main()
{
    int sell, hra, da,gr;

    printf("Enter Your Sellary = ");
    scanf("%d", &sell);

    if (sell <= 10000)
    {
        hra = sell * 0.20;
        da = sell * 0.80;
    }

    else if (sell <= 20000)
    {
        hra = sell * 0.25;
        da = sell * 0.90;
    }

    else 
    {
        hra = sell * 0.30;
        da = sell * 0.95;
    }

    gr=sell+hra+da;
    printf("Your Gross Selary is %d", gr);

    return 0;
}
