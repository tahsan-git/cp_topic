// Created on: 2025-09-21 20:38
// Author: Tahsan
// github profile:https://github.com/tahsan-git
// [problem link] : 

#include <bits/stdc++.h>
using namespace std;

#define Tahsan ios::sync_with_stdio(false);cin.tie(nullptr);
#define nl '\n'

#define yes cout<<"YES"<<nl;
#define no cout<<"NO"<<nl;

int main(){
    Tahsan
    int test_case;
    cin >> test_case;
    for(int t=0; t < test_case; t++){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int &x:arr) cin >> x;
        priority_queue<int,vector<int>,greater<int>> min_heap;

        map<int,int> count;
        for(int i=0;i<n;i++){
            count[arr[i]]++;
        }

        for(auto [x,y]:count){
            min_heap.push(y);
        }
        int highest = INT_MIN;

        while(!min_heap.empty()){
            int temp = min_heap.top();
            int sz = min_heap.size();
            highest = max(highest,sz*temp);
            min_heap.pop();
        }
        cout <<highest << nl;

    }
    return 0;
}