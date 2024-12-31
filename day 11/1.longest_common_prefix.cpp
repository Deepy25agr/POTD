class Solution {
    private: 
    int match(string &a,string &b){
        int n=min(a.size(),b.size());
        int len=0;
        for(int i=0;i<n;i++) {
            if(a[i]==b[i] ) len++;
            else break;
        }
        return len;
    }
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size(),len=INT_MAX;
        string temp=strs[0];
        for(int i=0;i<n;i++){
            // for(int j=i+1;j<n;j++){
            //     len=min(len,match(strs[i],strs[j]));
            // }
            //optimised(O(n))
            int matchCount=match(strs[i],temp);
            temp=temp.substr(0,matchCount);
            
        }
       // return strs[0].substr(0,len);
       return temp;
    }
};