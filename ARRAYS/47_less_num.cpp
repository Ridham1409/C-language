// Print all elements of an array that are less than a given number.
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i,num;

    cout<<"Enter a number = ";
    cin>>num;

    for (i = 0; i < 10; i++)
    {
        if (arr[i]<num)
        {
            cout<<" "<<arr[i];
        }

    }
    return 0;
}