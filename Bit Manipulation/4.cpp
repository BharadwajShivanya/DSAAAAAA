// 4.⁠ ⁠Find missing number in an array.
#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n) {
    int total = (n + 1) * (n + 2) / 2; // Sum from 1 to (n+1)
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return total - sum;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6}; // Missing 3
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Missing number is: " << findMissingNumber(arr, n) << endl;
    return 0;
};
