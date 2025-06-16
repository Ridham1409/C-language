// Find the position of the minimum element in an array.
#include <iostream>
using namespace std;
int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int min = 0, i = 0, pos = 0;

    min = arr[0];
    for (i = 1; i < 6; i++) {
        if (arr[i] < min) {
            min = arr[i];
            pos = i;
        }
    }

    cout << "Min number is: " << min << endl;
    cout << "Position : " << pos ;
    return 0;
}
