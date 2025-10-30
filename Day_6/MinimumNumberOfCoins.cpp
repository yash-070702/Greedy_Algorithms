#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findMin(int n) {
      
     int countOf10=n/10;
     n-=countOf10*10;
     
     int countOf5=n/5;
     n-=countOf5*5;
     
     int countOf2=n/2;
     n-=countOf2*2;; 
     
     int countOf1=n;
     
     n=0;
     
     
     return countOf10+countOf5+countOf2+countOf1;
        
    }
};