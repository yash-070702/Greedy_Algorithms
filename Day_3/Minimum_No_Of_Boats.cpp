#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size();
        int count=0;
        int i=0;
        int j=n-1;
  

        sort(people.begin(),people.end());

        while(i<=j){
            if(i==j){
                count++;
                i++;
                j--;
                continue;
            }

            else if(people[i]+people[j]<=limit){
                count++;
                i++;
                j--;
            }
            else{
                count++;
                j--;
            }
        }
return count;
           
    }
};