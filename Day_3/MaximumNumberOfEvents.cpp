#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    static bool cmp(vector<int>&a , vector<int>&b){
        return a[1]<b[1];
    }

    int maxEvents(vector<vector<int>>& events) {
     sort(events.begin(),events.end(),cmp);
     int n=events.size();
     int maxDay=events[n-1][1];
     int count=0;

     set<int>st;

     for(int i=1;i<=maxDay;i++){
        st.insert(i);
     }

     for(auto event : events){
        int start=event[0];
        int end=event[1];

        auto it=st.lower_bound(start);

        if(it!=st.end() && *it<=end){
            count++;
            st.erase(it);
        }
     }

    return count;
    }
};