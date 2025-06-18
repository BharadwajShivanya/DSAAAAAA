// 8.⁠ ⁠Reverse bits of a number.
#include <iostream>
using namespace std;

unsigned int reverseBits(unsigned int n) {
    unsigned int result = 0;
    for (int i = 0; i < 32; i++) {
        result <<= 1;           // Left shift result
        result |= (n & 1);      // Add last bit of n
        n >>= 1;                // Right shift n
    }
    return result;
}

int main() {
    unsigned int n;
    cout << "Enter a number: ";
    cin >> n;

    unsigned int reversed = reverseBits(n);
    cout << "Reversed bits = " << reversed << endl;

    return 0;
}
