#include <bits/stdc++.h>

using namespace std;

int main() {
    int x,y;
    int s1 = 0, s2 = 0;
    cin >> x >> y;

    for(int i = 1; i <= 6; i++) {
        for(int j = 1; j <= 6; j++) {
            if(i+j >= x or abs(i-j) >= y) {
                s1++;
            }
        }   
    }

    double ans = (double) (s1 + s2);

    cout << fixed << setprecision(17) << ans/36 << "\n";

    return 0;

}