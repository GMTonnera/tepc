#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    double temp1, temp2;
    long long s = 0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<pair<int, int>> vec;

    cin >> n;



    for(int i = 0; i < n; i++) {
        cin >> temp1 >> temp2;
        pq.push({temp2-temp1, i});
        vec.push_back({temp1, temp2});
    }

    while(!pq.empty()) {
        if(pq.size() > 1) {
            temp1 = vec[pq.top().second].first;
        } else {
            temp1 = vec[pq.top().second].second; 
        }
        pq.pop();
        s += temp1;
    }

    cout << s << "\n";

    return 0;
}