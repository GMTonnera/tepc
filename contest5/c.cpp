#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, temp;
    
    cin >> t;
    
    while(t--) {
        int min = -1;
        vector<int> vec;
        bool flag = true;
        cin >> n;

        for(int i = 0; i < n; i++) {
            cin >> temp;
            if(min == -1 or temp < min) {
                min = temp;
            }
            vec.push_back(temp);
        }
        temp = 0;
        for(int i = 0; i < n; i++) {
            if(vec[i] % min != 0) {
                flag = false;
            } else if(vec[i] % min == 0 and vec[i] != min) {
                temp++;
            }
        }

        if(flag) {
            cout << temp << "\n";
        } else {
            cout << vec.size() << "\n";
        }

    }


    return 0;
}