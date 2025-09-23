// Created on: 2025-09-21 21:17
// Author: Tahsan
// github profile: https://github.com/tahsan-git
// [problem link] :

#include <bits/stdc++.h>
using namespace std;

#define Tahsan ios::sync_with_stdio(false);cin.tie(nullptr);
#define nl '\n'

#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;

int main() {
    Tahsan
    int test_case;
    cin >> test_case;
    while (test_case--) {
        int n, m;
        cin >> n >> m;

        vector<int> freq(m + 1, 0);
        int covered = 0;            
        int ways = 0;
        

        for (int i = 0; i < n; i++) {
            int si;
            cin >> si;

            vector<int> temp(si);
            for (int j = 0; j < si; j++) {
                cin >> temp[j];
            }

            
            for (int x : temp) {
                if (freq[x] == 0) {
                    covered++;      
                }
                freq[x] = 1;        
            }

            if (covered == m) { 
                ways++;
                
            }
        }

        if (ways >= 3){
            yes
        }
        else{
            no
        }
    }
    return 0;
}
