#include <stdio.h>
int main()
{
    int v1, v2, v3;
    printf("Enter Number 1 = ");
    scanf("%d", &v1);

    printf("Enter Number 2 = ");
    scanf("%d", &v2);

    printf("Enter Number 2 = ");
    scanf("%d", &v3);

    if (v1 == v2)
        printf("Value = %d", v3);
    else if (v1 == v3)
        printf("Value = %d", v2);
    else
        printf("Value = %d", v1);

    return 0;
}
