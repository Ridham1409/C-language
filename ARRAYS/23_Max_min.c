// Find both maximum and minimum values from an array of 10 numbers.
#include <stdio.h>
int
main() {
    int arr[6]={1,2,3,4,5,6};
    int i, largest, min;
    largest = arr[0];

    for (i = 1; i < 6; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    
    min = arr[0];
    for (i = 1; i < 6; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("The largest number is: %d\n", largest);
    printf("The smallest number is: %d\n", min);
    return 0;
}
