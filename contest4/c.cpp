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

    while(true) {
        t++;
        if (e) {
            temp = q.front();
            q.pop();
        } 

        if(t % 3 == 0) {
            temp -= 3;
        } else {
            temp -= 1;
        }

        if(temp <= 0) {
            e = false;
        }

    }

    cout << 


    return 0;
}

// 10 0
// 9 1
// 8 2
// 5 3
// 4 4
// 3 5
// 0 6

// 9