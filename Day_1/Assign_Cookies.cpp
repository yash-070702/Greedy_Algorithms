#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int findContentChildren(vector<int>& g, vector<int>& s) {
     sort(g.begin(),g.end());
     sort(s.begin(),s.end());

     int count=0;
     int i=0;
     int j=0;
     
     int n=g.size();
     int m=s.size();

     while(i<n && j<m){
        if(g[i]<=s[j]){
            count++;
            i++;
            j++;
        }

        else if(g[i]>s[j])
        j++;
     }

     return count;
    }

};