// Calculate the sum of all elements in an integer array of size 5.
#include <iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5},i ,sum=0;
    {
        for(i=0 ; i<5 ; i++)
        {
            sum = sum + arr[i];
        }
        cout<<"Sum of Arrays = "<<sum;
    }
}
