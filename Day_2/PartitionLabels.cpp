#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<bool>visited(26,false);
        unordered_map<char,pair<int,int>>mp;

        for(int i=0;i<s.size();i++){
            if(visited[s[i]-'a']==false){
                mp[s[i]].first=i;
                mp[s[i]].second=i;
                visited[s[i]-'a']=true;
            }

            else{
                mp[s[i]].second=i;
            }
        }

        vector<int>result;

        int i=0;
        int n=s.size();
        int start=mp[s[0]].first;
        int end=mp[s[0]].second;

      for (int i = 0; i < n; i++) {
            end = max(end, mp[s[i]].second);  

            if (i == end) {                  
                result.push_back(end - start + 1);
                start = i + 1;               
            }
        }

        return result;
    }
};
