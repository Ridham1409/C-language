// Check if the number 25 exists in an array of 8 integers.
#include <iostream>
using namespace std;

int main()
{
    int arr[8]={1,2,3,4,5,6,7,25}, i, num=0 ;

     for (int i = 0; i < 9; i++)
     {
         if (arr[i] == 25) num++;

     }

    if (num > 0)
    {
        printf("The number 25 exists in the array.\n");
    }
    else
    {
        cout << "The number 25 does not exist in the array.\n" ;
        // printf("The number 25 does not exist in the array.\n");
    }
    return 0;
}

//That is not complate code.