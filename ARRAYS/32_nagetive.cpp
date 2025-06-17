// Count how many Nagetive numbers are present in an array.
#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {-33, 22, -34, 63, 24, -54, 68};
    int i, cnt = 0;

    for (i = 0; i < 7; i++)
    {
        if (arr[i] < 0)
        {
            cnt++;
        }
    }
    cout << "positive numbers in array: " << cnt;

    return 0;
}
