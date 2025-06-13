#include <stdio.h>
int main()
{
    char alpha;
    printf("Alphabet = ");
    scanf("%c", &alpha);

    if (alpha >= 'A' && alpha <= 'Z')
        printf("%c Is An Uppercase Alphabet!", alpha);

    else if (alpha >= 'a' && alpha <= 'z')
        printf("%c Is A Lowercase Alphabet!", alpha);

    else
        printf("%c Is Not An Alphabet!", alpha);

    return 0;
}