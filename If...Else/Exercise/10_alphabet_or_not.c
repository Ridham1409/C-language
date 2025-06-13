#include <stdio.h>
int main()
{
    char alpha;
    printf("Alphabet = ");
    scanf("%c", &alpha);

    if (alpha >= 'A' && alpha <= 'Z' || alpha >= 'a' && alpha <= 'z')
        printf("%c Is An Alphabet!", alpha);

    else
        printf("%c Is Not An Alphabet!", alpha);

    return 0;
}