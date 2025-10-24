#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkValidString(string str) {
    stack<int>open,star;

    for(int i=0;i<str.size();i++){
        if(str[i]=='(')
        open.push(i);

        else if(str[i]=='*')
        star.push(i);

        else{
            if(!open.empty())
            open.pop();

            else if(!star.empty())
            star.pop();

            else
            return false;
        }
    }

    while(!open.empty() && !star.empty())
    {
        if(open.top()>star.top())
        return false;

        open.pop();
        star.pop();
    }

    return open.empty();
    }
};