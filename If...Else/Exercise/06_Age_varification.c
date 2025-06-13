#include <stdio.h>
int main()
{
    int age;
    printf("Age = ");
    scanf("%d", &age);

    if (age >= 18)
        printf("You are %d You Can Vote!", age);
    else
        printf("You Are %d You can Not Vote!", age);

    return 0;
}