#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindrome(vector<string>& words) {
       unordered_map<string,int>mp;
       int length=0;
       bool isCentered=false;
       int n=words.size();
    

       for(string word : words){
        mp[word]++;
       }
       
       for(int i=0;i<n;i++){
        string str=words[i];

        if(mp.find(str)==mp.end())
        continue;
        

        if(str[0]==str[1]){
        int freq=mp[str];
        int pairs=freq/2;

        if(pairs>0){
        length+=(4*pairs);
        mp[str]-=(pairs*2);
        }

        if(mp[str]>0 && !isCentered){
            length+=2;
            isCentered=true;
           
        }
         mp.erase(str);
        continue;
        }

        else{
          string new_str="";
            new_str+=str[1];
            new_str+=str[0];

            if(mp.find(new_str)==mp.end())
            continue;
            

            else{
                length+=(4*min(mp[str],mp[new_str]));
                mp.erase(str);
                mp.erase(new_str);
                continue;
            }
        }
       }
       return length;
    }
};
