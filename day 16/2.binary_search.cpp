class Solution {
public:
    int binarysearch(vector<int>& nums, int target,int low,int high) {
      while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target){
                return binarysearch(nums,target,low,mid-1);
            }
            else
             return binarysearch(nums,target,mid+1,high);
        }
        return -1;

    }   
    int search(vector<int>& nums, int target) {
        /* linear search
        int n=nums.size();
        for(int i=0;i<n;i++){
        if(nums[i]==target){
                return i;
            }
        }
        return -1;*/

       /* iterative method
        int n=nums.size(),low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target){
                high=mid-1;
            }
            else
            low=mid+1;
        }
        return -1;*/
        binarysearch(nums,target,0,nums.size()-1);
    }
};

