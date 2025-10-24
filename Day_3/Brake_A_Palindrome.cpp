#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string breakPalindrome(string palindrome) {
        if(palindrome.size()==1)
        return "";

        int n=palindrome.length();
        bool otherThanA=false;
        bool change=false;

        for(int i=0;i<palindrome.size();i++){

            if(n&1){
              if(palindrome[i]!='a' && n/2!=i){
                palindrome[i]='a';
                otherThanA=true;
                change=true;
                break;
             }
            }

             else{
                if(palindrome[i]!='a'){
                palindrome[i]='a';
                otherThanA=true;
                change=true;
                break;
             }
             }
        }

        if(otherThanA && change)
        return palindrome;

        palindrome[n-1]='b';
        return palindrome;
    }
};