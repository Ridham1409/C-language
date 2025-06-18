// Print all elements of an array that are greater than 50.
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i;

    for (i = 0; i < 10; i++)
    {
        if (arr[i] > 50)
        {
            cout << " " << arr[i];
        }
    }
    return 0;
}