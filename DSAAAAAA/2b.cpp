
// 	b) In a given range of number from (1 -> N)
#include <iostream>
using namespace std;

int countSetBits(int n) {
    int total = 0;
    for (int i = 1; i <= n; i++) {
        int x = i;
        while (x > 0) {
            total += (x & 1);
            x = x >> 1;
        }
    }
    return total;
}

int main() {
    int n = 5;
    cout << "Total set bits from 1 to " << n << " = " << countSetBits(n) << endl;
    return 0;
}
