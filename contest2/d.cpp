#include <bits/stdc++.h>

using namespace std;

int main() {
    int m;
    int c = 10;
    vector<int> vec;
    cin >> m;

    while (m > 0) {
        if(pow(3,c) > m) {
            c--;
        } else {
            m -= pow(3,c);
            vec.push_back(c);
        }
    }
    cout << vec.size() << "\n";
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }

    return 0;
}