#include <stdio.h>
int main()
{
    char alpha;
    printf("Alphabet = ");
    scanf("%c", &alpha);

    if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u' || alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U')
        printf("%c Is A Vowel!", alpha);

    else if (alpha >= 'A' && alpha <= 'Z' || alpha >= 'a' && alpha <= 'z')
        printf("%c Is An Consonant!", alpha);

    else
        printf("%c Is Not An Alphabet!", alpha);

    return 0;
}