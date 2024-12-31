class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int n=s.size();
        int left=0,right=0,itr=0;
        while(itr<n){
            while(itr<n && s[itr]==' '){
                itr++;
            }
            if(itr==n) break;
            while(itr<n && s[itr]!=' '){
                s[right]=s[itr];
                right++;
                itr++;
            }
           
            reverse(s.begin()+left,s.begin()+right);
            s[right++]=' '; 
            left=right;
            itr++;
        }
        return s.substr(0,right-1);
    }
};