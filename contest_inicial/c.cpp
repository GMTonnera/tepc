#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, temp;
    
    cin >> t;
    while(t--) {
        vector<int> vec;
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> temp;
            vec.push_back(temp);
        }

        int p1 = 0;
        int p2 = n-1;
        int m = 0;
        int s1 = vec[p1];
        int s2 = vec[p2];
        
        while (p1 < p2) {
            // cout << "pos: " << p1 << " " << p2 << endl;
            // cout << "sum: " << s1 << " " << s2 << endl;
            // cout << "max: " << m << endl;
            if(s1 > s2) {
                p2--;
                s2 += vec[p2];
            } else if(s1 < s2) {
                p1++;
                s1 += vec[p1];
            } else {
                m = p1 + 1 + (n - p2);
                p1++;
                s1 += vec[p1];
            }
        }
        
        // cout << "pos: " << p1 << " " << p2 << endl;
        // cout << "sum: " << s1 << " " << s2 << endl;
        // cout << "max: " << m << endl;
        cout << m << endl;

    }
}