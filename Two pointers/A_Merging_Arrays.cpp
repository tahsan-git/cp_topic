// Created on: 2025-09-18 06:12
// Author: Tahsan
// github profile:https://github.com/tahsan-git
// [problem link] :https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A 

#include <bits/stdc++.h>
using namespace std;

#define Tahsan ios::sync_with_stdio(false);cin.tie(nullptr);
#define nl '\n'

#define yes cout<<"YES"<<nl;
#define no cout<<"NO"<<nl;

int main(){
    Tahsan
    int n,m;
    cin >> n >> m;
    vector<int> a(n),b(m), c;
    for(int &i:a) cin >> i;
    for(int &i:b) cin >> i;

    int a_point = 0;
    int b_point = 0;
    
    while(a_point < n && b_point < m){
        if(a[a_point] < b[b_point]){
            c.push_back(a[a_point++]);
        }
        else{
            c.push_back(b[b_point++]);
        }
    }
    while(a_point < n){
        c.push_back(a[a_point++]);
    }
    while(b_point < m){
        c.push_back(b[b_point++]);
    }

    for(int x:c){
        cout << x << ' ';
    }
    cout << nl;
    
    return 0;
}