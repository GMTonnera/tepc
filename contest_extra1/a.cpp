#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, u, k, temp;
    cin >> n;
    vector<vector<int>> vec(n+1);
    vector<vector<int>> matrix;
    
    for(int i = 0; i < n; i++) {
        cin >> u >> k; 
        vector<int> v;
        for(int j = 0; j < k; j++) {
            cin >> temp;
            v.push_back(temp);
        }
        vec[u]= v;
    }

    for(int i = 1; i <= n; i++) {
        vector<int> v(n, 0);
        for(int j = 0; j < vec[i].size(); j++) {
            v[vec[i][j]-1] = 1;
        }
        matrix.push_back(v);
    }

    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j];
            if(j < matrix[i].size()-1) {
                cout << " ";
            }
        }
        // if(i < n-1) {
            cout << "\n";
        // }
    }
    return 0;
}