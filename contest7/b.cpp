#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q, t;
    int l = 1, r = 2, ans = 0;
    char c;

    cin >> n >> q;

    while(q--) {
        cin >> c >> t;

        if(c == 'R') {
            if(r > l and t < l) {
                ans += n - r + t;
            } else if(r > l and t > r) {
                ans += t - r;
            } else if(r > l and t > l and t < r) {
                ans += r - t;
            } else if(r < l and t < l and t > r) {
                ans += t - r;
            } else if(r < l and t < r) {
                ans += r - t;
            } else if(r < l and t > l) {
                ans += n - t + r;
            }
            r = t;
        } else if (c == 'L') {
            if(l > r and t < r) {
                ans += n - l + t;
            } else if(l > r and t > l) {
                ans += t - l;
            } else if(l > r and t > r and t < l) {
                ans += l - t;
            } else if(l < r and t < r and t > l) {
                ans += t - l;
            } else if(l < r and t < l) {
                ans += l - t;
            } else if(l < r and t > r) {
                ans += n - t + l;
            }
            l = t;
        }
    }

    cout << ans << "\n"; 

}