
// 2.⁠ ⁠Count total number of set bits:
// 	a) In a given number N
// 	b) In a given range of number from (1 -> N)

 

#include <iostream>
using namespace std;

bool checkKthBit(int n, int k,int totalBits = 32) {
     int lsbIndex = totalBits - k; // Convert MSB-based index to LSB-based
    return (n & (1 << lsbIndex)) != 0;
    
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
