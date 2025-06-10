#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, temp;
    long long t = 0;
    bool e = true;
    queue<int> q;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> temp;
        q.push(temp);
    }
    while(!q.empty()) {
        temp = q.front();
        q.pop();
        
        if(t % 3 == 0) {
            t += temp / 5 * 3;
            if(temp % 5 == 1) {
                t++; 
            } else if(temp % 5 == 2) {
                t += 2;
            } else if(temp % 5 == 3) {
                t += 3;
            } else if(temp % 5 == 4) {
                t += 3;
            }
        } else if(t % 3 == 1) {
            t += temp / 5 * 3;
            if(temp % 5 == 1) {
                t++; 
            } else if(temp % 5 == 2) {
                t += 2;
            } else if(temp % 5 == 3) {
                t += 2;
            } else if(temp % 5 == 4) {
                t += 2;
            }
        } else if(t % 3 == 2) {
            t += temp / 5 * 3;
            if(temp % 5 == 1) {
                t++; 
            } else if(temp % 5 == 2) {
                t++;
            } else if(temp % 5 == 3) {
                t++;
            } else if(temp % 5 == 4) {
                t += 2;
            }
        }
    }

    cout << t << "\n";
    return 0;
}