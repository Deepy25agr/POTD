#include <bits/stdc++.h>
using namespace std;

// Function to solve a single test case
int solve(vector<int>& v, int n) {
    vector<int> ds;

    // Compute the distances where elements are out of place
    for (int i = 0; i < n; i++) {
        int d = abs(v[i] - i); // Distance between current index and the correct position
        if (d == 0) continue; // If already in place, skip
        ds.push_back(d);
    }

    // Find the GCD of all distances
    int ans = ds[0];
    for (auto x : ds) {
        ans = __gcd(ans, x);
    }

    return ans; // Return the maximum k
}

int main() {
    int t;
    cin >> t; // Input the number of test cases

    vector<int> results; // Store results for all test cases

    while (t--) {
        int n;
        cin >> n; // Input size of the permutation
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            v[i]--; // Convert to 0-based indexing
        }

        // Solve the current test case and store the result
        results.push_back(solve(v, n));
    }

    // Print all results at once
    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}