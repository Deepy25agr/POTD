class Solution {
public:
    int minPartitions(string n) {
        int ops=0;
        for(int i=0;i<n.size();i++){
            ops=max(n[i]-'0',ops);
        }
        return ops;
    }
};