// Input 6 numbers into an array and print each element with its index position.
#include <stdio.h>
int main()
{
    int arr[6];
    int i;
    for (i = 0; i < 6; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 6; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}