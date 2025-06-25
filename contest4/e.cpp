#include <bits/stdc++.h>

using namespace std;


vector<string> mapa;
vector<vector<int>> colors;

int dfs(int x, int y, int c) {
    int ans = 1;
    colors[y][x] = c;
    // verificar se pode andar na posicao atual
    if(x+1 < mapa[0].length() and mapa[y][x+1] == '#')    
        return ans;
    if(x-1 >= 0 and mapa[y][x-1] == '#')
        return ans;
    if(y+1 < mapa.size() and mapa[y+1][x] == '#')
        return ans;
    if(y-1 >= 0 and mapa[y-1][x] == '#')
        return ans;

    // andar nas posiveis posicoes
    if(x+1 < mapa[0].length() and mapa[y][x+1] == '.' and colors[y][x+1] != c)
        ans += dfs(x+1, y, c);
    if(x-1 >= 0 and mapa[y][x-1] == '.' and colors[y][x-1] != c)
        ans += dfs(x-1, y, c);
    if(y+1 < mapa.size() and mapa[y+1][x] == '.' and colors[y+1][x] != c)
        ans += dfs(x, y+1, c);
    if(y-1 >= 0 and mapa[y-1][x] == '.' and colors[y-1][x] != c)
        ans += dfs(x, y-1, c);

    return ans;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int h, w, temp, m = 1;
    string s;
    
    cin >> h >> w;

    colors = vector<vector<int>>(h, vector<int>(w, 0));

    // for(int i = 0; i < h; i++) {
    //     for(int j = 0; j < w; j++) {
    //         cout << colors[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    for(int i = 0; i < h; i++) {
        cin >> s; 
        mapa.push_back(s);
    }

    vector<pair<int,int>> vec2;

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(mapa[i][j] == '#')
                continue;
            if(j+1 < w and mapa[i][j+1] == '#')    
                continue;
            if(j-1 >= 0 and mapa[i][j-1] == '#')
                continue;
            if(i+1 < h and mapa[i+1][j] == '#')
                continue;
            if(i-1 >= 0 and mapa[i-1][j] == '#')
                continue;

            vec2.push_back(make_pair(j,i));
        }
    }

    int color = 1;
    for(pair<int, int> p : vec2) {
        // cout << p.first << " " << p.second << "\n";
        if(colors[p.second][p.first] == 0) {
            temp = dfs(p.first, p.second, color);
            color++;
            if(temp > m) {
                m = temp;
            }
        }
    }

    // for(int i = 0; i < h; i++) {
    //     for(int j = 0; j < w; j++) {
    //         if(vec[i][j] == '.' and !global_visited[i][j]) {
    //             vector<vector<bool>> visited(h, vector<bool>(w, false));
    //             temp = dfs(vec, visited, j, i);
    //             if(temp > m) {
    //                 m = temp;
    //             }
    //         }
    //     }
    // }

    cout << m << '\n';
    
    return 0;
}