#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k, temp;
    vector<pair<int, int>> vec;


    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        cin >> temp;
        vec.push_back(make_pair(temp, i+1));
    }

    sort(vec.begin(), vec.end());

    temp = n+1;
    for(int i = 0; i+k-1 < n; i++) {
        int mi = n+1, ma = -1;
        // cout << "i = " << i << "\n";
        for(int j = i; j < i+k; j++) {
            // cout << vec[j].first << " " << vec[j].second << "\n";
            if(vec[j].second < mi) {
                mi = vec[j].second;
            }
            if(vec[j].second > ma) {
                ma = vec[j].second;
            }
        }
        // cout << "mi = " << mi << ", ma = " << ma << "\n";
        if(ma-mi < temp) {
            temp = ma-mi;
        }
    } 
    cout << temp << "\n";

    return 0;
}