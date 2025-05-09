#include <bits/stdc++.h>

using namespace std;

int temp(int n, int m) {
    vector<int> v;
    queue<vector<int>> q;

    q.push({n,m,0});
    while(true) {
        v = q.front();
        q.pop();
        if(v[0] == v[1]) {
            return v[2];
        }
        if (v[0]*2 < v[1])
            q.push({v[0]*2, v[1], v[2]+1});
        // if (v[0] > v[1])
        if (v[0] > 0)
            q.push({v[0]-1, v[1], v[2]+1});
    }
}

int main() {
    int n,m;

    cin >> n >> m;
    cout << temp(n,m) << endl;

    return 0;
}