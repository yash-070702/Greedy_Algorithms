#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
     unordered_map<int,int>mp;

     for(int task : tasks){
        mp[task]++;
     }   

     int count=0;

     for(auto it : mp){
        int number=it.first;
        int quant=it.second;

        if(quant==1)
        return -1;

        while(quant!=0){
            if(quant%3==0){
                quant-=3;
                count++;
            }
            else if(quant%2==0){
            quant-=2;
            count++;
            }
            else{
                quant-=3;
                count++;
            }
        }
     }
     return count;
    }
};