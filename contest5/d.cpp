#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, u, v, w;
    cin >> n;
    vector<vector<pair<int,int>>> adj(n+1);
    vector<int> colors(n+1, -1);
    
    for(int i = 0; i < n-1; i++) {
        cin >> u >> v >> w;
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    queue<pair<int,int>> q;
    colors[1] = 0;
    q.push({0, 1});
    
    while(!q.empty()) {
        pair<int,int> p = q.front();
        q.pop();
        for(auto v : adj[p.second]) {
            if(colors[v.first] != -1) {
                continue;
            }
            if(v.second % 2 == 0) {
                q.push(make_pair(p.first, v.first));
                colors[v.first] = p.first;
            } else {
                q.push(make_pair(!p.first, v.first));
                colors[v.first] = !p.first;
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        cout << colors[i] << "\n";
    }

    return 0;
}


/*

    1
    |
    3
   / \
  4   2
      |
      5


*/