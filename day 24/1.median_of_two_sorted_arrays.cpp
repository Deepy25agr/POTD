class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>merged(nums1);
        for(int i=0;i<nums2.size();i++){
            merged.push_back(nums2[i]);
        }
        sort(merged.begin(),merged.end());
        int n=merged.size();
        
            if(n%2==0){
                int i=n/2;
                return (merged[i-1]+merged[i])/2.0;
                
            }
        
        return merged[n/2];

    }
};