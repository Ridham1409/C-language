// Find the position (index) of a given element in an array.
#include <stdio.h>
int main()
{
    int arr[10];
    int i,num,found=0;
    printf("Enter 10 Arrays:\n\n");

    for (i = 0; i < 10; i++)
    {
        printf("Array[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter a number to search: ");
    scanf("%d", &num);

    for (i = 0; i < 6; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}
//That is not complate code.