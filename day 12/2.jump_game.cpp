class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxjmp=0;
        for(int i=0;i<n;i++){
            if(i>maxjmp) return false;
            maxjmp=max(maxjmp,i+nums[i]);

        }
        return true;
    }
};