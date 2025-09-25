// Created on: 2025-09-24 18:40
// Author: Tahsan
// github profile:https://github.com/tahsan-git
// [problem link] :

#include <bits/stdc++.h>
using namespace std;

#define Tahsan                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define nl '\n'

#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;

int main()
{
    Tahsan
    int n;cin>>n;
    vector<int> bar(n);
    for(int &i:bar) cin >> i;
    sort(bar.begin(),bar.end());
    
    int q; cin >> q;
    while(q--){
        int coin; cin >> coin;
        auto it = upper_bound(bar.begin(),bar.end(),coin);
        cout << it-bar.begin() << nl;
       

    }
    return 0;
}