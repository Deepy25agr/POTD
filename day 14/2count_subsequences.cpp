#include <bits\stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    

   vector<int> a(n,0);
   for(int i=0;i<n;i++) cin>>a[i];
   long long ones=0,zeros=0;
   for(int i=0;i<n;i++){
    if(a[i]==0){
        zeros++;
    }
    else if(a[i]==1){
        ones++;
    }


   }
   long long ans =ones*pow(2,zeros);
   cout<<ans<<"\n";

       
        
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){

    solve();
    }

    return 0;
}