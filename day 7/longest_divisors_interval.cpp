#include <iostream>
using namespace std;

// Function to find the maximum size of the interval
int longestDivisorsInterval(long long n) {
    int count = 0;
    for (long long i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        } else {
            break; // Stop when we find a non-divisor
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        long long n;
        cin >> n;
        cout << longestDivisorsInterval(n) << "\n";
    }

    return 0;
}
