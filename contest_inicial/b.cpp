#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, q, t1, t2;
    vector<int> vec1;
    vector<long long> vec2;

    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        cin >> t1;
        vec1.push_back(t1);
    }

    vec2.push_back(0);
    for(int i = 1; i <= n; i++) {
        vec2.push_back(vec2[i-1]+vec1[i-1]);
    }

    for (int i = 0; i < q; i++) {
        cin >> t1 >> t2;
        cout << vec2[t2] - vec2[t1-1] << '\n';
    }
}