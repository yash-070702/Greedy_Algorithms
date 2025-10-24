#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        vector<pair<int,int>> mp;
        int n = gas.size();

        for (int i = 0; i < n; i++) {
            mp.push_back({gas[i], cost[i]});
        }

        vector<bool>visited(n,false);

        int front = 0;
        visited[0]=true;
        int rear = 0;
        int balance = 0;
       

        while (front < n) {
            balance += (mp[rear].first - mp[rear].second);

            if (balance >= 0) {
                rear = (rear + 1) % n;
                

                if (rear == front)
                    return front;
            } 
            else {
                front = rear + 1;
                if(front>=n || visited[front])
                break;
                
                visited[front]=true;
                rear = front;
                balance = 0;
            }
        }

        return -1;
    }
};
