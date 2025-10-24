#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool cmp(vector<int>&a , vector<int>&b){
        return a[1]<b[1];
    }
    int scheduleCourse(vector<vector<int>>& courses) {

    int n=courses.size();
    priority_queue<int>pq;
    int currTime=0;

    sort(courses.begin(),courses.end(),cmp);

    for(auto course:courses){
        int duration=course[0];
        int lastDay=course[1];

        if(duration>lastDay)
        continue;

        currTime+=duration;
        pq.push(duration);
        
        if(currTime>lastDay){
            currTime-=pq.top();
            pq.pop();
        }
        
        
    }
    return pq.size();
    }
};