//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here.
        if (m == 0 || m == 1) return m;

    // Binary search to find the nth root
    int low = 1, high = m;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        long long midPow = pow(mid, n);

        if (midPow == m) {
            return mid; // Found the integer nth root
        } else if (midPow < m) {
            low = mid + 1; // Search in the upper half
        } else {
            high = mid - 1; // Search in the lower half
        }
    }
    return -1; // No integer nth root exists
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        Solution ob;
        int ans = ob.nthRoot(n, m);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends