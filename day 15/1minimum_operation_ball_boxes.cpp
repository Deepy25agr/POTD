class Solution {

public:
    vector<int> minOperations(string boxes) 
    {
        int n = boxes.size(), oneCount = 0, op = 0;
        vector<int>ans(n);

        for(int i=0;i<n;i++)
        {
            ans[i] = op;
            oneCount += boxes[i] == '1';
            op += oneCount;
        }
        oneCount = op = 0;
        for(int i=n-1;i>=0;i--)
        {
            ans[i] += op;
            oneCount += boxes[i] == '1';
            op += oneCount;
        }
        return ans;
    }
};