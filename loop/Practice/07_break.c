#include <stdio.h>
int main()
{
    int i;

    for (i = 1; i <= 20; i++)
    {
        if (i == 14)
          break;
        
        printf("\n%d", i);
    }

    return 0;
}