#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    int s = 0;

    cin >> n >> m;

    for(int a = 0; a <= 1000; a++) {
        for(int b = 0; b <= 1000; b++) {
            if(pow(a,2) + b == n and pow(b,2) + a == m) {
                s++;
            }
         }
    }

    cout << s << "\n";

    return 0;
}
