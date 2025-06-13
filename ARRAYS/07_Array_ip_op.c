// Write a program to read 5 integers from the user and store them in an array.
#include <stdio.h>
int main(){
    int arr[5];
    printf("Enter 5 Numbers:\n");
    for(int i = 0; i < 5; i++){
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("You entered:\n");
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}