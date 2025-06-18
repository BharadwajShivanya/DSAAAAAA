//2.⁠ ⁠Count total number of set bits:
// 	a) In a given number N
// 	b) In a given range of number from (1 -> N)

#include <iostream>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        if (n & 1) count++;   
        n = n >> 1;           // right shift to check next bit
    }
    return count;
}

int main() {
    int n = 10; // Binary = 1010 → 2 set bits
    cout << "Set bits in " << n << " = " << countSetBits(n) << endl;
    return 0;
}
