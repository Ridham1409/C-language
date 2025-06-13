#include <stdio.h>
int main()
{
    int v1, v2, v3;
    printf("Enter Number 1 = ");
    scanf("%d", &v1);

    printf("Enter Number 2 = ");
    scanf("%d", &v2);

    printf("Enter Number 3 = ");
    scanf("%d", &v3);

    if (v1 == 13)
        printf("Can not Sum");
    else if (v2 == 13)
        printf("Can not sum");
    else if (v3 == 13)
        printf("Can not sum");
    else
        printf("Value = %d", v1 + v2 + v3);

    return 0;
}
