#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
      
        long long sum=0;
        int i=0;
        int n=happiness.size();

        sort(happiness.rbegin(),happiness.rend());

        while(k && i<n){
        if(happiness[i]-i<0){
        k--;
        i++;
        continue;
        }

        else{
            sum+=(happiness[i]-i);
        }
        k--;
        i++;
        }
        return sum;
    }
};