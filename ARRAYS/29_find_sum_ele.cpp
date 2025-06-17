// Find the sum of elements at even positions (index 0, 2, 4, etc.) in an array.
#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, sum = 0;

    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + arr[i];
        }
    }
    cout << "Sum Of Even Positions is = " << sum;
}