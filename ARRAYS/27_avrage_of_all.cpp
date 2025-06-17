// Find the average of all numbers in an array of 8 integers.
#include <iostream>
using namespace std;
int main()
{
    int arr[8] = { 14, 24, 53, 24, 51, 56, 77, 88};
    int i ,avg=0 ,sum=0;

    for (i = 0; i < 8; i++)
    {
        sum=sum+arr[i];
        avg=sum/8;
    }
    cout<<"Avrage = "<<avg;
    return 0;
}