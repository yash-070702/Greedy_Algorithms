#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());

        int count=0;
        for(int i=0;i<costs.size();i++){
            if(coins<=0 || costs[i]>coins)
            return count;

            coins-=costs[i];
            count++;
        }
        return count;
    }
};