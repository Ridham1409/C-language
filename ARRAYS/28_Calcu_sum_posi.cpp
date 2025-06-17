// Calculate the sum of only positive numbers in an array.
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, -2, 3, -4, 5};
    int i, sum = 0;

    for(i=0 ;i<5 ;i++)
    {
        if(arr[i]>0)
        {
            sum=sum+arr[i];
        }
    }
    cout<<"Sum Of Positive Number is = "<<sum;
}