#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, temp1, temp2, temp3;
    int x = 0;
    int y = 0;
    int z = 0;
    cin >> n;
    while(n--) {
        cin >> temp1 >> temp2 >> temp3;
        x += temp1;
        y += temp2;
        z += temp3;
    }

    if(x == 0 and y == 0 and z == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }


    return 0;
}