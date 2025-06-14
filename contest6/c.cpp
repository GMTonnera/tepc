#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, q, temp;
    int ans = 0;
    string s;
    char c;
    
    cin >> n >> q;
    cin >> s;
    
    for(int i = 0; i < n; i++) {
        if(s[i] == 'A' and s[i+1] == 'B' and s[i+2] == 'C') {
            ans++;
        } 
    }
    
    while(q--) {
        cin >> temp >> c;
        if(c != 'A' and s[temp-1] == 'A' and s[temp] == 'B' and s[temp+1] == 'C') {
            ans--;
        } else if (c != 'B' and s[temp-2] == 'A' and s[temp-1] == 'B' and s[temp] == 'C') {
            ans--;
        } else if (c != 'C' and s[temp-3] == 'A' and s[temp-2] == 'B' and s[temp-1] == 'C') {
            ans--;
        }
        if(c == 'A' and s[temp-1] != 'A' and s[temp] == 'B' and s[temp+1] == 'C') {
            ans++;
        } else if(c == 'B' and s[temp-2] == 'A' and s[temp-1] != 'B' and s[temp] == 'C') {
            ans++;
        } else if(c == 'C' and s[temp-3] == 'A' and s[temp-2] == 'B' and s[temp-1] != 'C') {
            ans++;
        }
        s[temp-1] = c;

        cout << ans << "\n";
    }

    return 0;
}