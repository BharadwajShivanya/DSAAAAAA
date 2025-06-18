//3.⁠ ⁠Find an unique number in an array, which doesn't occur in pair.
#include <iostream>
using namespace std;

int findUnique(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= arr[i]; // XOR all elements
    }
    return result;
}

int main() {
    int arr[] = {2, 3, 5, 4, 5, 3, 4}; // only 2 is unique
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unique number is: " << findUnique(arr, n) << endl;
    return 0;
}
