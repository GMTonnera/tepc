#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, temp;
    int m = 0;
    vector<int> vec;
    
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> temp;
        vec.push_back(temp);
    }
    
    int p1 = 0;
    int p2 = 0;
    sort(vec.begin(), vec.end());

    while(p1 <= n-1 and p2 <= n-1) {
        // cout << p1 << " " << p2 << endl;
        // cin >> temp;
        if(vec[p2]-vec[p1] <=5) {
            if(p2-p1+1 > m) {
                m = p2-p1+1;
            }
            p2++;
        }
        else if(vec[p2]-vec[p1] > 5) {
            p1++;
        }
    }
    cout << m << endl;
    return 0;
}