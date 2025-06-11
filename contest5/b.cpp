#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;

    cin >> t;
    
    while (t--) {
        cin >> n;
        if(n % 7 == 0) {
            cout << n << "\n";
        } else {
            n = (n / 10 * 10) + 10;
            if (n % 7 == 0) {
                n--;
            }
            cout << n - (n % 7) << "\n";
        }
    }

    return 0;
}