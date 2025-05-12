#include <bits/stdc++.h>

using namespace std;



int temp(int n, int m) {
    vector<int> visited(max(n,m)*2+1, 0);
    vector<int> v;
    queue<vector<int>> q;
    // int temp;

    q.push({n,m,0});
    while(true) {
        v = q.front();
        q.pop();
        visited[v[0]] = 1;
        // cout << v[0] << " " << v[1] << " " << v[2] << endl;
        // for(int i = 0; i < visited.size(); i++)
        //     cout << i << ": " << visited[i] << endl;
        // cout << endl;
        if(v[0] == v[1]) {
            return v[2];
        }
        if (v[0] < v[1] and visited[v[0]*2] == 0) {
            q.push({v[0]*2, v[1], v[2]+1});
        }
            
        
        if (v[0] > 0 and visited[v[0]-1] == 0) {
            q.push({v[0]-1, v[1], v[2]+1});
        }
            
    }
}

int main() {
    int n,m;

    cin >> n >> m;
    cout << temp(n,m) << endl;

    return 0;
}