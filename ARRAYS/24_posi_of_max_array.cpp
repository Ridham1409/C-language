// Find the position of the maximum element in an array.
#include <iostream>
using namespace std;
int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int max = 0, i = 0, pos = 0;

    max = arr[0];
    for (i = 1; i < 6; i++) {
        if (arr[i] > max) {
            max = arr[i];
            pos = i;
        }
    }

    cout << "Max number is: " << max << endl;
    cout << "Position of maximum number is: " << pos ;
    return 0;
}
