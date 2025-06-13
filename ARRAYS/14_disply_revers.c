// Display all elements of an array in reverse order.
#include <stdio.h>
int main(){
    int arr[5], i;
     for (i = 0; i < 5; i++)
     {
            printf("Array [%d]: ", i + 1);
            scanf("%d", &arr[i]);
     }

     for (i = 4; i >= 0; i--)
     {
            printf("%d ", arr[i]);
     }
     return 0;
}