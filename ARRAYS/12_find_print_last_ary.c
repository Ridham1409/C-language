// Find and print the first element of an integer array.

#include <stdio.h>
int main()
{
    int arr[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("arr[] = %d\n", arr[5]);
    return 0;
}