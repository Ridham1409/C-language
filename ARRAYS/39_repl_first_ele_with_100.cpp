// Replace the first element of an array with 100.
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {-33, 22, -25, 63, 24, -54, 68};
    int i;

    for (i = 0; i < 7; i++)
    {
        if(i==0){
            arr[i]=100;
        }
    }
    for (i = 0; i < 7; i++)
    {
        cout<<" "<<arr[i];
    }
    
    

    return 0;
}