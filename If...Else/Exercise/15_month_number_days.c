#include <stdio.h>
int main()
{
    int mon;
    printf("Month Number = ");
    scanf("%d", &mon);

    if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12)
        printf("Month %d Has 31 Days!", mon);

    else if (mon == 2)
        printf("Month %d Has 28/29 Days!", mon);

    else if (mon == 4 || mon == 6 || mon == 9 || mon == 11)
        printf("Month %d Has 30 Days!", mon);

    else
        printf("Month %d Is Not A Valid Month Number!", mon);   
    return 0;
}