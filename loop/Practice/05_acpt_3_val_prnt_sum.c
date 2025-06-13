#include<stdio.h>
int main()
{
    int n, i, sum=0;

    for ( i = 0; i < 3; i++)
    {
        printf("Enter Value = ");
        scanf("%d", &n);

        sum=sum+n;
    }
    printf("Sum = %d", sum);
    
    return 0;
}