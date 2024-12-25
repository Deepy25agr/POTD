#include<bits\stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>> k;
    
    int initial=0;
    int max=240-k,problemsolved=0;
   
    for(int i=1;i<=n;i++){
        int s=5*i;
        initial+=s;
        if(initial<=max)
        {
            problemsolved++;
        }
        else 
        break;
    }
    cout<<problemsolved<<"\n";
    return 0;
}