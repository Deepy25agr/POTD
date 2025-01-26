//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        // int maxnum=0,n=arr.size();
        // for(int i=0;i<n;i++){
        //     int total=0;
        //     int r=k;
        //     for(int j=i;j<n;j++){
        //         if(r>0){
        //             total+=arr[j];
        //             r--;
        //         }
        //     }
        //     maxnum=max(maxnum,total);
        //     r=k;
        // }
        // return maxnum;
        
        int maxsum=0,currentsum=0;
        for(int i=0;i<k;i++){
            currentsum+=arr[i];
        }
        maxsum=currentsum;
        for(int i=k;i<arr.size();i++){
            currentsum+=arr[i]-arr[i-k];
            maxsum=max(maxsum,currentsum);
        }
        return maxsum;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        int ans = ob.maximumSumSubarray(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends