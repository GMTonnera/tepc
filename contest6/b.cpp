#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    string ans = "";
    cin >> s;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'W' and s[i+1] == 'U' and s[i+2] == 'B') {
            i += 2;
        } else {
            for(int j = i; j < s.length(); j++) {
                if(s[j] == 'W' and s[j+1] == 'U' and s[j+2] == 'B') {
                    i += (j-i)+2;
                    break;
                } else {
                    ans += s[j];
                    if(j == s.length()-1) {
                        i+=j-i;
                    }
                }
            }
            ans += " ";
        }
    }

    cout << ans << "\n";

    return 0;
}