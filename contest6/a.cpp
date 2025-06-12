#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2;
    int x = 0;
    cin >> s1 >> s2;

    for(int i = 0; i < s2.length(); i++) {
        if(s2[i] == s1[x]) {
            x++;
            cout << i+1 << " ";
        } 
    }

    return 0;
}