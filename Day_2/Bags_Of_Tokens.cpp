#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
    
    sort(tokens.begin(),tokens.end());
    int i=0;
    int j=tokens.size()-1;
    int score=0;
    int maxScore=0;
    
    while(i<=j){
        if(power>=tokens[i]){
            power-=tokens[i];
            score++;
            i++;
            maxScore=max(maxScore,score);
        }
        else if(score>=1){
            power+=tokens[j];
            j--;
            score--;
        }

        else
        break;
    }
       return maxScore;
    }
};
