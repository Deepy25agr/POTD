class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans^=nums[i];    //any number when xor with 0 gives the same number and xor of same number will be zero
           
        }
        return ans;
    }
};