class Solution {
public:
    int binary(int n){
        int count=0;
        while(n!=0){
            if(n%2==1) count++;
            n=n/2;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int>res;
        for(int i=0;i<=n;i++){
            int j=binary(i);
            res.push_back(j);
            
        }
        return res;
    }
};