// Read 10 characters from the user and store them in a character array, then print the array.
#include <stdio.h>
int main(){
    char arr[10];
    int i;

    printf("Enter 10 character : ", i+1);
    for( i=0 ; i < 10; i++)
    {
        scanf(" %c", &arr[i]);
    }

    for(i=0 ; i < 10; i++)
    {
        printf("%c ", arr[i]);
    }
    return 0;
}