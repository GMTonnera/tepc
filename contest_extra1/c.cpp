#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> visited(1001, vector<int>(1001, 0));

void dfs(vector<string> &map, int n, int m, int i, int j) {
    if(i+1 < n and visited[i+1][j] == 0 and map[i+1][j] == '.') {
        visited[i+1][j] = 1;
        dfs(map, n, m, i+1, j);
    
    }
    
    if(i-1 >= 0 and visited[i-1][j] == 0 and map[i-1][j] == '.') {
        visited[i-1][j] = 1;
        dfs(map, n, m, i-1, j);
    }
        
    if(j+1 < m and visited[i][j+1] == 0 and map[i][j+1] == '.') {
        visited[i][j+1] = 1;
        dfs(map, n, m, i, j+1);
    }
        
    if(j-1 >= 0 and visited[i][j-1] == 0 and map[i][j-1] == '.') {
        visited[i][j-1] = 1;
        dfs(map, n, m, i, j-1);
    }
        
}

int main() {
    int n, m;
    int rooms = 0;
    string temp;
    vector<string> map;

    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        cin >> temp;
        map.push_back(temp);
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(visited[i][j] == 0 and map[i][j] == '.') {
                visited[i][j] = 1;
                dfs(map, n, m, i, j);
                rooms++;
            }
        }
    }
    
    cout << rooms << endl;
    return 0;
}