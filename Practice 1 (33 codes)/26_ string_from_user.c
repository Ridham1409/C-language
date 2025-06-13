#include <stdio.h>
int main()
{
    char a[100]; 
    printf("Enter your name = ");
    scanf("%99s", a);
    printf("Hello, %s\n", a);
    return 0;
}