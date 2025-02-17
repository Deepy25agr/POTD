class Solution {
public:
    bool search(vector<int>& nums, int target) {
       /* linear search
       for(int i=0;i<nums.size();i++){
            if(target==nums[i]) return true;
        }
        return false;*/

        //binary search
    //      int n=nums.size();
    //    int low=0,high=n-1;
    //    while(low<=high)
    //    {
    //     int mid=(low+high)/2;
    //     if(nums[mid]==target) return true;
    //     if(nums[low]==nums[mid] && nums[mid]==nums[high]){
    //         low++;
    //         high--;
    //         continue;
    //     }
    //     else if(nums[low]<=nums[mid]){
    //         if(nums[low]<=target && target<=nums[mid])
    //         high=mid-1;
        
    //     else low=mid+1;
    //     }
    //     else{
    //      if(nums[mid]<=target && target<=nums[high])
    //        low=mid+1;
        
    //      else high=mid-1;
    //     }
    //    }
    //    return false;
         //binary search (optimal)
        //tc-O(n+m),sc-O(1)
        int n=matrix.size();
        int m=matrix[0].size();
        int row=0,col=m-1;
        while(row<n && col>=0){
          if(matrix[row][col]==target) return true;
          else if (matrix[row][col]<target) row++;
          else col--;  
        }
        return false;
    }
};