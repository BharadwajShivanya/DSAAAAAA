
// 5.⁠ ⁠Check whether a number is in power of 2 or not.

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPowerOfTwo(num))
        cout << num << " is a power of 2." << endl;
    else
        cout << num << " is NOT a power of 2." << endl;

    return 0;
}
