#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    if(n % 2 == 0 and k <= n / 2) {
        cout << k * 2 - 1 << "\n";
    } else if(n % 2 == 0 and k > n / 2) {
        cout << (k - n / 2) * 2 << "\n";
    } else if (n % 2 != 0 and k <= n / 2 + 1) {
        cout << k * 2 - 1 << "\n";
    } else if (n % 2 != 0 and k > n / 2 + 1) {
        cout << (k - n / 2 - 1) * 2 << "\n";
    }

    return 0;
}

// 1 3 5 7 9 2 4 6 8 10
// 1 2 3 4 5 6 7 8 9 10
//           1 2 3 4 5
// 1 3 5 7 9 11 2 4 6  8 10
// 1 2 3 4 5  6 7 8 9 10 11
//              1 2 3  4  5
// 1 3 5 7 2 4 6
// 1 2 3 4 5 6 7