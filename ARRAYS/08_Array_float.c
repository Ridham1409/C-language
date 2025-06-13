// Create an array of 4 float numbers, take input from user, and display all elements.
#include <stdio.h>  
int main(){
    float arr[4];
    for (int i = 0; i < 4; i++)
    {
        printf("Number = ");
        scanf("%f", &arr[i]);
    }
    printf("You entered:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%0.2f ", arr[i]);
    }
    return 0;
}