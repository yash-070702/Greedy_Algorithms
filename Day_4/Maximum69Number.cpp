#include<bits/stdc++.h>
using namespace std;

class Solution {
public:


    int maximum69Number (int num) {
        vector<int>arr;
        int sum=0;
        while(num>0)
        {
            arr.push_back(num%10);
            num=num/10;
        }
        reverse(arr.begin(),arr.end());

       for(int i=0;i<arr.size();i++)
      {
     if(arr[i]==6)
     {
         arr[i]=9;
         break;
     }
 }

 for(int i=0;i<arr.size();i++)
 {
     sum=sum*10+arr[i];
 }

 return sum;

    }
};