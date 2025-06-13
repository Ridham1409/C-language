#include <stdio.h>
int main()
{
    int  evn=0;

    for (int i = 1; i <= 5; i++)
    {
        if (i % 2 == 0)
        {
            evn++;
        }
       
    }
    printf("Even = %d", evn);

    return 0;
}