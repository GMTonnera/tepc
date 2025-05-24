#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x, y, z;

    cin >> n >> x >> y >> z;

    if(z < max(x,y) and min(x,y) < z) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    return 0;
}