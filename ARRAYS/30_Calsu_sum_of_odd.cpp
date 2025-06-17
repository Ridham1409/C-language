// Calculate the sum of elements at odd positions (index 1, 3, 5, etc.) in an array.
#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0, i;

    for (i = 0; i < 10; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + arr[i];
        }
    }
    cout << "Sum of Odd Num is = " << sum;
}