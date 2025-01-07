class Solution {
public:
    int arrangeCoins(int n) {
        int i;//index
        int k=n; //passing the n valye to k
        for(i=1;i<=n;i++){
            k=k-i;
            if(k<0){
            return i-1;
            }
        }
        return 1; 
        
    }
};