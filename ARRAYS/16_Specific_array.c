// Search for a specific number in an array of 10 integers and print "Found" or "Not Found".
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

    for (i = 0; i < 10; i++)
    {
        if (num == arr[i])
        {
            found=1;
            printf("Founded %d \n", num);
        }
        else
        {
            printf("Not Found %d \n", num);
        }

        return 0;

    }
}