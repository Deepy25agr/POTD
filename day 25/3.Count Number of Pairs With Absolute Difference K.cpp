class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int c=nums[i]-nums[j];
                if(abs(c)==k) count++;
            }
        }
        return count;
    }
};