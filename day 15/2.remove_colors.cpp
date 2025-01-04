class Solution {

public:
    bool winnerOfGame(string colors) {
        int aliceScore = 0, bobScore = 0; 

       
        for (int i = 1; i < colors.size() - 1; i++) {
            char currentColor = colors[i];
            char prevColor = colors[i - 1];
            char nextColor = colors[i + 1];

            // Check if Alice can make a move here
            if (currentColor == 'A' && prevColor == 'A' && nextColor == 'A')
                aliceScore++; 

            // Check if Bob can make a move here
            else if (currentColor == 'B' && prevColor == 'B' && nextColor == 'B')
                bobScore++;
        }

       
        return aliceScore > bobScore;
    }
};
      