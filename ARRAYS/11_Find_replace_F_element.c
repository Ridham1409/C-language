// Find and print the first element of an integer array.

#include <stdio.h>
    int
    main()
{
    int arr[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
        printf("arr[0] = %d\n", arr[0]);
    return 0;
}