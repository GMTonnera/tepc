#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, q, temp1, temp2, offset = 0;
    vector<int> vec;

    cin >> n >> q;

    for(int i = 1; i <= n; i++) vec.push_back(i);

    while(q--) {
        cin >> temp1;
        if(temp1 == 1) {
            cin >> temp1 >> temp2;
            vec[(temp1-1+offset)%n] = temp2;
        } else if(temp1 == 2) {
            cin >> temp1;
            cout << vec[(temp1-1+offset)%n] << "\n";
        } else if(temp1 == 3) {
            cin >> temp1;
            offset += temp1;
            offset %= n;
        }
    }
    return 0;
}