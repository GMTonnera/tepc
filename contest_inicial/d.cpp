#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, e, s;
    int m = 0;
    int su = 0;
    priority_queue<int, vector<int>, greater<int>> entradas;
    priority_queue<int, vector<int>, greater<int>> saidas;
    
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> e >> s;
        entradas.push(e);
        saidas.push(s);
    }
    
    while(!entradas.empty() and !saidas.empty()) {
        e = entradas.top();
        s = saidas.top();

        if (e < s) {
            su++;
            entradas.pop();
            if(su > m) {
                m = su;
            }
        }
        else if (e > s) {
            su--;
            saidas.pop();
        }
        else {
            entradas.pop();
            saidas.pop();
        }
    }

    cout << m << endl;
    return 0;
}