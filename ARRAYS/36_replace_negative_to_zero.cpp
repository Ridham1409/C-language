// Replace all negative numbers in an array with 0.
#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {-33, 22, -25, 63, 24, -54, 68};
    int i;

    for (i = 0; i < 7; i++)
    {
        if (arr[i] < 0)
        {
            arr[i] = 0;
        }
    }
        for (i = 0; i < 7; i++)
        {
            cout <<" "<< arr[i];
        }

    return 0;
}