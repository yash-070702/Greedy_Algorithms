#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string maxValue(string n, int x) {
        
        char ch='0'+x;   
        int size=n.size();     
        if(n[0]=='-'){    
        for(int i=1;i<size;i++){
            if(n[i]<=ch)
            continue;

            return n.substr(0,i)+ch+n.substr(i);
        }
        return n+ch;
        }

         for(int i=0;i<size;i++){
            if(n[i]>=ch)
            continue;

            return n.substr(0,i)+ch+n.substr(i);
        }
        return n+ch;
    }
};