// Find the largest number in an array of 6 integers.
#include <stdio.h>
int main()
{
    int arr[6], i, largest;
    printf("Enter 6 integers:\n");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < 6; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    printf("The largest number is: %d\n", largest);
    return 0;
}
