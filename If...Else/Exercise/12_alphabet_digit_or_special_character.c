#include <stdio.h>
int main()
{
    char alpha;
    printf("Number = ");
    scanf("%c", &alpha);

    if (alpha >= '0' && alpha <= '9')
        printf("%c Is A Digit!", alpha);

    else if (alpha >= 'A' && alpha <= 'Z' || alpha >= 'a' && alpha <= 'z')
        printf("%c Is An Alphabet!", alpha);

    else
        printf("%c Is A Special Character!", alpha);

    return 0;
}