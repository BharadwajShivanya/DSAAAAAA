// 6.⁠ ⁠Find two missing numbers in an array.

#include <iostream>
using namespace std;

void findTwoMissing(int arr[], int n) {
    int total = (n + 2) * (n + 3) / 2;  // Sum from 1 to n+2
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];

    int sumMissing = total - sum;
    int pivot = sumMissing / 2;

    // Divide numbers in two groups: ≤ pivot and > pivot
    int totalLow = 0, arrLow = 0;
    for (int i = 1; i <= pivot; i++) totalLow += i;
    for (int i = 0; i < n; i++)
        if (arr[i] <= pivot) arrLow += arr[i];

    int firstMissing = totalLow - arrLow;
    int secondMissing = sumMissing - firstMissing;

    cout << "The two missing numbers are: " << firstMissing << " and " << secondMissing << endl;
}

int main() {
    int arr[] = {1, 3, 5, 6};  // n = 4 → should have numbers 1 to 6 → missing: 2 and 4
    int n = sizeof(arr) / sizeof(arr[0]);

    findTwoMissing(arr, n);
    return 0;
}
