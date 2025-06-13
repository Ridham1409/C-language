#include <stdio.h>
int main()
{
    int i;

    for (i = 1; i <= 20; i++)
    {
        if (i == 14)
          goto jump1;
                  
        printf("\n%d", i);
    }

    jump1:
    printf("This is Jump 1\n");
    goto jump2; 

    jump2:
    printf("This is Jump 2\n");

    return 0;
}