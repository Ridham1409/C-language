#include <stdio.h>

int main()
{

    int pos, neg;

    printf("Emter a Positive Number = ");
    scanf("%d", &pos);

    if (pos > 0)
    {
        neg = pos * (-1);
    }
    else
    {
        neg = pos * (-1);
    }

    printf("Answer = %d", neg);

    return 0;
}