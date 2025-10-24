#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int brokenCalc(int start, int target) {
        int count=0;

        while(start<target)
        {
            if(!(target&1))
            target/=2;

            else
            target++;

            count++;
        }
         count+=(start-target);
         return count;
    }
};