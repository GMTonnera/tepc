#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, k, temp1, temp2;
    int s = 0;
    priority_queue<int> pq1;
    priority_queue<int> pq2;
    
    cin >> n >> m >> k;

    for(int i = 0; i < n; i++) {
        cin >> temp1;
        pq1.push(temp1);
    }

    for(int i = 0; i < m; i++) {
        cin >> temp1;
        pq2.push(temp1);
    }

    while(!pq1.empty() and !pq2.empty()) {
        temp1 = pq1.top();
        temp2 = pq2.top();
        
        // cout << temp1 << " " << temp2 << " " << s << endl; 


        if(temp1-k <= temp2 and temp1+k >= temp2) {
            pq1.pop();
            pq2.pop();
            s++;
        }
        else {
            if(temp1 < temp2) {
                pq2.pop();
            }
            else {
                pq1.pop();
            }
        }
    }

    cout << s << endl;
    return 0;
}