#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, temp;
    unordered_map<int,int> map;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> temp;
        if(map.find(temp) == map.end()) {
            cout << -1 << " ";
        } else {
            cout << map[temp] << " ";
        }
        map[temp] = i;
    }

    return 0;
}