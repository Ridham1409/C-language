#include <stdio.h>

int main()
{
    char line[100];
    printf("Enter a line of text:\n");
    gets(line); // reads until newline or 99 chars

    printf("You wrote: %s", line); // `line` already contains '\n' if room
    return 0;
}