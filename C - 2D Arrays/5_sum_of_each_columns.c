#include <stdio.h>

int main()
{
    int a[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};

    for (int j = 0; j < 4; j++)
    {
        int colSum = 0;
        for (int i = 0; i < 2; i++)
            colSum += a[i][j];
        printf("Sum of column %d = %d\n", j, colSum);
    }
    return 0;
}
