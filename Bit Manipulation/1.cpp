// // Bit Manipulation
// -----------------------

// 1.⁠ ⁠Find kth bit is set of not:
// 	a) Consider MSB as first bit
// 	b) Consider LSB as first bit.
// 2.⁠ ⁠Count total number of set bits:
// 	a) In a given number N
// 	b) In a given range of number from (1 -> N)
// 3.⁠ ⁠Find an unique number in an array, which doesn't occur in pair.
// 4.⁠ ⁠Find missing number in an array.
// 5.⁠ ⁠Check whether a number is in power of 2 or not.
// 6.⁠ ⁠Find two missing numbers in an array.
// 7.⁠ ⁠GCD of 2 given numbers
// // 8.⁠ ⁠Reverse bits of a number.

// class Solution {
// public:
//     bool checkKthBit(int n, int k) {
//         return (n & (1 << k)) = 0;
//     }
// };


#include <iostream>
using namespace std;

bool checkKthBit(int n, int k) {
    return (n & (1 << k)) != 0;
}

int main() {
    int num = 10;  // Binary: 1010
    int k = 1;

    if (checkKthBit(num, k))
        cout << "K-th bit is set.\n";
    else
        cout << "K-th bit is not set.\n";

    return 0;
}
