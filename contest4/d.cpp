#include <bits/stdc++.h>

using namespace std;

int n,m;
vector<int> subset;
vector<string> vec;
int ans = 100000000;

void search(int k) {
    if(k == n) {
        // for(int i = 0; i < subset.size(); i++) {
        //     cout << subset[i] << " ";
        // }
        // cout << "\n";
        
        vector<int> vec2(m, 0);
        int sum = 0;
        for(int i = 0; i < m; i++) {
            for(auto e : subset) {
                if(vec[e-1][i] == 'o') {
                    vec2[i] = 1;
                    sum++;
                    break;
                }
            }
        }

        if(sum == m and subset.size() < ans) {
            ans = subset.size();
        }

    } else {
        search(k+1);
        subset.push_back(k+1);
        search(k+1);
        subset.pop_back();
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string s;
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        cin >> s;
        vec.push_back(s);
    }

    search(0);
    cout << ans << "\n";
    
    return 0;
}