#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
        unordered_set<int>st;

        for(auto frnds:friendships){
            int u=frnds[0]-1;
            int v=frnds[1]-1;

            unordered_set<int>lang(languages[u].begin(),languages[u].end());

            bool canTalk=false;
            
            for(auto it : languages[v]){
                if(lang.count(it)){
                    canTalk=true;
                    break;
                }
            }
             if(!canTalk){
                    st.insert(u);
                    st.insert(v);
                }
        }

        vector<int>knownLang(n+1,0);

        int mostCommonLang=0;

        for(int saduser : st){
            for(int lang:languages[saduser]){
                knownLang[lang]++;
                mostCommonLang=max(mostCommonLang,knownLang[lang]);
            }
        }
        return st.size()-mostCommonLang;
    }
};