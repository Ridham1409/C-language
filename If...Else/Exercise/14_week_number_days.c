#include <stdio.h>
int main()
{
    int wk;
    printf("Week Number = ");
    scanf("%d", &wk);

   if (1==wk)
        printf("Week %d Is A Monday!", wk);

        else if (2==wk)
        printf("Day %d Is A Tuesday!", wk);

        else if (3==wk)
        printf("Day %d Is A Wednesday!", wk);

        else if (4==wk)
        printf("Day %d Is A Thursday!", wk);

        else if (5==wk)
        printf("Day %d Is A Friday!", wk);

        else if (6==wk)
        printf("Day %d Is A Saturday!", wk);

        else if (7==wk)
        printf("Day %d Is A Sunday!", wk);

        else
        printf("Day %d Is Not A Valid Week Number!", wk);
   
   
    return 0;
}