#include <bits/stdc++.h>

using namespace std;

int bfs(int x_start, int y_start, int x_end, int y_end, vector<vector<int>> &visited) {
    int ans, temp;
    vector<int> vec;
    queue<vector<int>> q;
    q.push({x_start, y_start, 0});

    while(!q.empty()) {
        vec = q.front();
        q.pop();
        
        // cout << vec[0] << " " << vec[1] << " " << vec[2] << endl;
        
        // cin >> temp;
        if(vec[0] == x_end and vec[1] == y_end) {
            ans = vec[2];
            break;
        }

        visited[vec[1]][vec[0]] = 1;
        
        if(vec[1]-2 >= 0 and vec[0]-1 >= 0 and visited[vec[1]-2][vec[0]-1] == 0) {
            q.push({vec[0]-1, vec[1]-2, vec[2]+1});
        }
        
        if(vec[1]-2 >= 0 and vec[0]+1 < 8 and visited[vec[1]-2][vec[0]+1] == 0) {
            q.push({vec[0]+1, vec[1]-2, vec[2]+1});
        }
        
        if(vec[1]-1 >= 0 and vec[0]+2 < 8 and visited[vec[1]-1][vec[0]+2] == 0) {
            q.push({vec[0]+2, vec[1]-1, vec[2]+1});
        }
        
        if(vec[1]+1 < 8 and vec[0]+2 < 8 and visited[vec[1]+1][vec[0]+2] == 0) {
            q.push({vec[0]+2, vec[1]+1, vec[2]+1});
        }
        
        if(vec[1]+2 < 8 and vec[0]+1 < 8 and visited[vec[1]+2][vec[0]+1] == 0) {
            q.push({vec[0]+1, vec[1]+2, vec[2]+1});
        }
        
        if(vec[1]+2 < 8 and vec[0]-1 >= 0 and visited[vec[1]+2][vec[0]-1] == 0) {
            q.push({vec[0]-1, vec[1]+2, vec[2]+1});
        }
        
        if(vec[1]+1 < 8 and vec[0]-2 >= 0 and visited[vec[1]+1][vec[0]-2] == 0) {
            q.push({vec[0]-2, vec[1]+1, vec[2]+1});
        }
        
        if(vec[1]-1 >= 0 and vec[0]-2 >= 0 and visited[vec[1]-1][vec[0]-2] == 0) {
            q.push({vec[0]-2, vec[1]-1, vec[2]+1});
        }
        
    }
    return ans;

}

int main() {
    int t;
    int x_start, y_start, x_end, y_end;
    string start, end, temp;
    vector<vector<int>> visited;

    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> start >> end;
        if(start[0] == 'a')
            x_start = 0;
        else if(start[0] == 'b')
            x_start = 1;
        else if(start[0] == 'c')
            x_start = 2;
        else if(start[0] == 'd')
            x_start = 3;
        else if(start[0] == 'e')
            x_start = 4;
        else if(start[0] == 'f')
            x_start = 5;
        else if(start[0] == 'g')
            x_start = 6;
        else if(start[0] == 'h')
            x_start = 7;
        
        y_start = start[1] - '0' - 1;

        if(end[0] == 'a')
            x_end = 0;
        else if(end[0] == 'b')
            x_end = 1;
        else if(end[0] == 'c')
            x_end = 2;
        else if(end[0] == 'd')
            x_end = 3;
        else if(end[0] == 'e')
            x_end = 4;
        else if(end[0] == 'f')
            x_end = 5;
        else if(end[0] == 'g')
            x_end = 6;
        else if(end[0] == 'h')
            x_end = 7;

        y_end = end[1] - '0' - 1;
        visited = vector<vector<int>>(8, vector<int>(8, 0));
        cout << bfs(x_start, y_start, x_end, y_end, visited) << endl;
    }


    return 0;
}