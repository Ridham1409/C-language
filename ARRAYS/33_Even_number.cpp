// Count how many even numbers are in an array of integers.
#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {-33, 22, -34, 63, 24, -54, 68};
    int i, cnt = 0;

    for (i = 0; i < 7; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cnt++;
        }
    }
    cout << "Even numbers in array: " << cnt;

    return 0;
}
