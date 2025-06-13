#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Number 1 = ");
    scanf("%d", &n1);
    printf("Number 2 = ");
    scanf("%d", &n2);
    printf("Number 3 = ");
    scanf("%d", &n3);

    if (n1 >= n2 && n1 >= n3)
        printf("%d Is The Largest Number!", n1);

    else if (n2 >= n1 && n2 >= n3)
        printf("%d Is The Largest Number!", n2);

    else if (n3 >= n1 && n3 >= n2)
        printf("%d Is The Largest Number!", n3);

    else
        printf("All Numbers Are Equal!");

    return 0;
}
