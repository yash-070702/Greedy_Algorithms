#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
    int currfive=0;
    int currten=0;
    int currTwenty=0;

    for(int bill : bills){
        if(bill==5){
            currfive++;
        }

        else if(bill==10){
        if(currfive==0)
        return false;

        currfive--;
        currten++;
        }    

        else if(bill==20){
            if(currten>=1 && currfive>=1){
                currten--;
                currfive--;
            }
            else if(currfive>=3){
                currfive-=3;
            }
            else
            return false;
        }
        }
    return true;
    }
};