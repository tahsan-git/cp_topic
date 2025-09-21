// Created on: 2025-09-21 16:32
// Author: Tahsan
// github profile:https://github.com/tahsan-git
// [problem link] : https://codeforces.com/problemset/problem/1256/A

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
        
        int a,b,n,s;
        cin >> a >> b >> n >> s;
    
        int n_coins = a * n;
        int div = s/n;
        if(div <= a){
            s -= n*div;
        }
        else{
            s -= n*a;
        }
    
        if(s <= b){
            yes
        }
        else{
            no
        }
    }
    
    return 0;
}