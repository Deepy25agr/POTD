#include <bits\stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> arr(n,0);
        for(int i=0;i<n;i++) cin>>arr[i];
        long long sum=0,ops=0;
        for(int i=0;i<n;i++) sum+=abs(arr[i]);
        bool flag=false;
        arr.push_back(1);
        for(int i=0;i<=n;i++){
            if(arr[i]==0) continue;
            if(arr[i]<0){
                flag=true;
            }
            else{
                if(flag){
                    flag=false;
                    ops++;
                }
            }
        }
        cout<<sum<<" "<<ops<<"\n";
        
}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}
