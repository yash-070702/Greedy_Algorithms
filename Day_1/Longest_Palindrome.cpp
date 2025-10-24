#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindrome(string str) {
       bool isOdd=false;

        unordered_map<char,int>mp;

        for(char s : str){
            mp[s]++;
        }

        int count=0;

        for(auto it : mp){
            if(it.second&1){
            isOdd=true;
            count+=(it.second-1);
            }
            else{
                count+=it.second;
            }
        }
        if(isOdd){
            count++;
        }
        return count;
    }
};