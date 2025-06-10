#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k, temp;
    long long s;
    set<long long> se;

    cin >> n >> k;

    s = k*(k+1)/2;
    for(int i = 0; i < n; i ++) {
        cin >> temp;
        se.insert(temp);
    }

    for(auto i : se) {
        if (i <= k) {
            s -= i;
        }
    }

    cout << s << endl;
    
    return 0;
}
// 1 2 3 4 5