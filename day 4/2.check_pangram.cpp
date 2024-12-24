#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    set<char>result;
    for(char ch:str){
        result.insert(tolower(ch));
    }
    if(result.size()==26){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;

}