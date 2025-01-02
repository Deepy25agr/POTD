#include<bits\stdc++.h>
using namespace std ;
int main(){
    int n,k;
    cin>>n>>k;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int r=arr[k-1];
    int count=0;
    for(int i=0;i<n;++i){
        if(arr[i]>=r && arr[i]>0){
            count++;
    }
    }
    cout<<count<<"\n";
    
    
}