class Solution {
public:
    int scoreOfString(string s) {
        int score=0;
        int size=s.length();
        for(int i=0;i<size-1;i++){      //go through all the characters of a string
            score+= abs(s[i]-s[i+1]);  //abs used for absolute value 
        }
        return score;

        
    }
};