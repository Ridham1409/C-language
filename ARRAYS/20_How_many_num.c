// Count how many times a specific number appears in an array.
#include <stdio.h>
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3};
    int n ;
    int count1 = 4; // Number to count in the array
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == count1) {
            count++;
        }
    }

    printf("Number %d appears %d times in the array.\n", count1, count);
    return 0;
}

//That is not complate code.