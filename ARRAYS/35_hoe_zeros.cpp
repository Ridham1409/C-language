// Count how many zeros are present in an array.
#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {0, 22, 0, 63, 24, 0, 68};
    int i, cnt = 0;

    for (i = 0; i < 7; i++)
    {
        if (arr[i] == 0)
        {
            cnt++;
        }
    }
    cout << "Zeros in array: " << cnt;

    return 0;
}
