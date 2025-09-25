// Created on: 2025-09-24 18:27
// Author: Tahsan
// github profile:https://github.com/tahsan-git
// [problem link] : https://codeforces.com/problemset/problem/474/B

#include <bits/stdc++.h>
using namespace std;

#define Tahsan ios::sync_with_stdio(false);cin.tie(nullptr);
#define nl '\n'

#define yes cout<<"YES"<<nl;
#define no cout<<"NO"<<nl;

int lower(vector<int>& arr,int target){
    int low = 0,high = arr.size()-1;
    while (low <= high)
    {
        /* code */
        int mid = low + (high - low) / 2;
        if(arr[mid] < target){
            low = mid+1;
        }
        else if(arr[mid] > target){
            high = mid-1;
        }
        else{
            return mid;
        }
    }
    return low;
    
}

int main(){
    Tahsan
    int n; cin >> n;
    vector<int> a(n);
    for(int &x:a) cin >> x;

    vector<int> prefix(n+1,0);
    for(int i=0;i<n;i++){
        prefix[i+1] = prefix[i] + a[i];
    }
    // for(auto x:prefix){
    //     cout << x << ' ';
    // }

    int m; cin >> m;
    vector<int> juice(m);
    for(int &x:juice) cin >> x;
    for(auto x:juice){
        
        int label = lower(prefix,x);
        cout << label << nl;
    }
    
    

    
    return 0;
}