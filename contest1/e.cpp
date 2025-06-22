#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, temp;
    vector<int> vec;
    
    cin >> n >> k;
    
    for(int i = 0; i < n; i++) {
        cin >> temp;
        vec.push_back(temp);
    }
    
    vector<int> vec2;
    vec2.push_back(0);

    for(int i = 0; i < n; i++) {
        vec2.push_back(vec[i]+vec2[i]);
    }

    long long s = -1;
    int ans = -1;
    for(int i = 1; i+k-1 <= n; i++) {
        if(s == -1 or s > vec2[i+k-1] - vec2[i-1]) {
            s = vec2[i+k-1] - vec2[i-1];
            ans = i;
        }
    }

    cout << ans << "\n";
    return 0;
}